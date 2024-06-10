#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TABLE_SIZE = 11;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];

public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (size_t i = 0; i < key.length(); ++i) {
            hash_val += key[i];
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        for (size_t i = 0; i < table[hash_val].size(); ++i) {
            HashNode* node = table[hash_val][i];
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);
        for (size_t i = 0; i < table[hash_val].size(); ++i) {
            if (table[hash_val][i]->name == name) {
                delete table[hash_val][i];
                table[hash_val].erase(table[hash_val].begin() + i);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (size_t i = 0; i < table[hash_val].size(); ++i) {
            if (table[hash_val][i]->name == name) {
                return table[hash_val][i]->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            cout << i << ": ";
            for (size_t j = 0; j < table[i].size(); ++j) {
                HashNode* node = table[i][j];
                cout << "[" << node->name << ", " << node->phone_number << "]";
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;
    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;
    cout << "Phone Hp Ghana : " << employee_map.searchByName("Ghana") << endl;

    employee_map.remove("Mistah");
    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;
    employee_map.print();

    return 0;
}

