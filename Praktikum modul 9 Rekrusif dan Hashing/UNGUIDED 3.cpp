#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Mahasiswa {
    string nim;
    int nilai;
};

const int TABLE_SIZE = 100;

class HashNode {
public:
    Mahasiswa data;
    HashNode* next;

    HashNode(Mahasiswa data) : data(data), next(NULL) {}
};


class HashMap {
private:
    vector<HashNode*> table;

int hashFunc(string nim) {
    int hash_val = 0;
    for (size_t i = 0; i < nim.length(); ++i) {
        hash_val += nim[i];
    }
    return hash_val % TABLE_SIZE;
}

public:
HashMap() : table(TABLE_SIZE, NULL) {}

    // Fungsi untuk menambahkan data mahasiswa ke hash table
    void tambahData(Mahasiswa mahasiswa) {
        int index = hashFunc(mahasiswa.nim);
        HashNode* newNode = new HashNode(mahasiswa);
if (table[index] == NULL) {
            table[index] = newNode;
        } else {
            HashNode* current = table[index];
while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Fungsi untuk menghapus data mahasiswa dari hash table berdasarkan NIM
    void hapusData(string nim) {
        int index = hashFunc(nim);
if (table[index] == NULL) {
            HashNode* current = table[index];
            HashNode* prev = NULL;
            while (current != NULL && current->data.nim != nim) {
                prev = current;
                current = current->next;
            }
            if (current != NULL) {
                if (prev != NULL) {
                    prev->next = current->next;
                } else {
                    table[index] = current->next;
                }
                delete current;
            }
        }
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan NIM
    Mahasiswa* cariDataNIM(string nim) {
        int index = hashFunc(nim);
        HashNode* current = table[index];
        while (current != NULL) {
            if (current->data.nim == nim) {
                return &current->data;
            }
            current = current->next;
        }
        return NULL;
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan rentang nilai (80-90)
    vector<Mahasiswa*> cariDataRentangNilai() {
        vector<Mahasiswa*> hasil;
        for (int i = 0; i < TABLE_SIZE; ++i) {
            HashNode* node = table[i];
            while (node != NULL) {
                if (node->data.nilai >= 80 && node->data.nilai <= 90) {
                    hasil.push_back(&node->data);
                }
                node = node->next;
            }
        }
        return hasil;
    }
};

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "Menu:" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Hapus data mahasiswa" << endl;
    cout << "3. Cari data mahasiswa berdasarkan NIM" << endl;
    cout << "4. Cari data mahasiswa berdasarkan rentang nilai (80-90)" << endl;
    cout << "5. Keluar" << endl;
}

int main() {
    HashMap hashTable;
    int pilihan;
    do {
        tampilkanMenu();
        cout << "Pilih: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1: {
                Mahasiswa mhs;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> mhs.nim;
                cout << "Masukkan nilai mahasiswa: ";
                cin >> mhs.nilai;
                hashTable.tambahData(mhs);
                break;
            }
            case 2: {
                string nim;
                cout << "Masukkan NIM mahasiswa yang ingin dihapus: ";
                cin >> nim;
                hashTable.hapusData(nim);
                break;
            }
            case 3: {
                string nim;
                cout << "Masukkan NIM mahasiswa yang ingin dicari: ";
                cin >> nim;
                Mahasiswa* hasil = hashTable.cariDataNIM(nim);
                if (hasil != NULL) {
                    cout << "Mahasiswa dengan NIM " << nim << " ditemukan. Nilainya: " << hasil->nilai << endl;
                } else {
                    cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
                }
                break;
            }
            case 4: {
    vector<Mahasiswa*> hasil = hashTable.cariDataRentangNilai();
    if (!hasil.empty()) {
        cout << "Mahasiswa dengan nilai antara 80 dan 90:" << endl;
        for (size_t i = 0; i < hasil.size(); ++i) {
            Mahasiswa* mhs = hasil[i];
            cout << "NIM: " << mhs->nim << ", Nilai: " << mhs->nilai << endl;
        }
    } else {
        cout << "Tidak ada mahasiswa dengan nilai antara 80 dan 90." << endl;
    }
    break;
}

            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 5);

    return 0;
}

