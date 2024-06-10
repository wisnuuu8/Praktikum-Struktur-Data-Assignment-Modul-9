**BAB 1**

**PENDAHULUAN**

**LATAR BELAKANG**

**Rekursif**

Rekursif adalah metode dalam pemrograman di mana sebuah fungsi memanggil dirinya sendiri secara langsung atau tidak langsung untuk menyelesaikan sebuah masalah [1]. Teknik ini sering digunakan untuk menyederhanakan solusi dari masalah yang kompleks dengan memecahnya menjadi sub-masalah yang lebih sederhana dan berulang. Rekursif biasanya memiliki dua komponen utama:

Base Case (Kasus Dasar): Kondisi yang akan menghentikan rekursi. Tanpa base case, rekursi akan terus berjalan tanpa henti (infinite loop).
Recursive Case (Kasus Rekursif): Bagian dari fungsi yang memecah masalah menjadi sub-masalah yang lebih kecil dan memanggil fungsi itu sendiri dengan sub-masalah tersebut.
Contoh umum dari penggunaan rekursif adalah dalam perhitungan faktorial, pencarian di struktur data seperti pohon, dan algoritma pembagian seperti Merge Sort dan Quick Sort.

**Hash Table**

Hash Table adalah struktur data yang mengimplementasikan sebuah array asosiatif, sebuah struktur data yang dapat memetakan kunci (key) ke nilai (value). Hash table menggunakan fungsi hash untuk menghitung indeks dari array di mana nilai yang diinginkan dapat ditemukan atau disimpan [2]. Fungsi hash mengambil input kunci dan mengembalikan indeks array di mana nilai terkait akan ditempatkan.

Komponen utama dari hash table adalah:

Key (Kunci): Nilai unik yang digunakan untuk mengidentifikasi data.
Value (Nilai): Data yang dikaitkan dengan kunci.
Hash Function (Fungsi Hash): Fungsi yang mengubah kunci menjadi indeks di dalam array.
Buckets: Lokasi penyimpanan di dalam array di mana nilai ditempatkan berdasarkan hasil fungsi hash.
Hash table sangat efisien dalam hal pencarian, penyisipan, dan penghapusan data, dengan kompleksitas waktu rata-rata O(1) untuk operasi-operasi tersebut. Namun, hash table dapat mengalami masalah seperti tabrakan (collision), di mana dua kunci menghasilkan indeks yang sama. Berbagai metode seperti chaining dan open addressing digunakan untuk menangani tabrakan ini.

Contoh penggunaan hash table termasuk implementasi tabel simbol di kompiler, penyimpanan data dalam cache, dan pencarian cepat dalam database.

**RUMUSAN MASALAH**

a. Bagaimana cara efektif untuk memahami dan mengajarkan konsep rekursif dalam konteks struktur data dan algoritma?

b. Bagaimana cara mengimplementasikan rekursif secara efisien dalam berbagai bahasa pemrograman?

c. Bagaimana cara kerja hash code dan penerapannya dalam pemrograman modern?


**TUJUAN PRAKTIKUM**

a. Mampu memahami konsep rekursif pada struktur data dan algoritma

b. Mampu mengimplementasikan rekursif pada kode program

c. Mahasiswa mampu menerapkan Hash Code kedalam pemrograman

**BAB 2**

**PEMBAHASAN**

**DASAR TEORI**

**Konsep Rekursif**

Rekursif adalah proses di mana sebuah fungsi atau prosedur memanggil dirinya sendiri. Proses ini dapat berulang kali terjadi hingga kondisi tertentu terpenuhi untuk mengakhiri rekursi. Rekursi terdiri dari dua jenis:

Rekursi Langsung: Fungsi memanggil dirinya sendiri secara langsung.

Rekursi Tidak Langsung: Fungsi memanggil dirinya sendiri melalui fungsi lain.

**Kelebihan Rekursif:**

Kode lebih singkat dan mudah dimengerti.

Efektif untuk masalah yang bisa dipecah menjadi sub-tugas serupa, seperti penjelajahan struktur data pohon.

Kode rekursif sering lebih elegan dibandingkan dengan pendekatan iteratif.

**Kekurangan Rekursif:**

Menggunakan ruang memori lebih besar karena setiap pemanggilan rekursif menambah overhead pada call stack.

Beberapa implementasi rekursif mungkin kurang efisien dalam hal waktu.

Kesulitan dalam pemahaman konsep oleh beberapa programmer dapat menimbulkan bug.

**Ilustrasi Rekursif:**

Fungsi rekursif biasanya memiliki:

Base Case (Kasus Dasar): Menghentikan rekursi.

Recursive Case (Kasus Rekursif): Memecah masalah menjadi sub-masalah dan memanggil fungsi itu sendiri.

**Konsep Hash Table**

Hash Table adalah struktur data yang mengorganisir data ke dalam pasangan kunci-nilai menggunakan fungsi hash untuk memetakan kunci ke indeks array.

**Fungsi Hash:**

Fungsi hash membuat pemetaan antara kunci dan nilai menggunakan rumus matematika. Hasil dari fungsi ini adalah nilai hash yang digunakan sebagai indeks array [3].

**Operasi Hash Table:**

Insertion: Menambahkan data baru dengan menentukan posisi bucket menggunakan fungsi hash.

Deletion: Menghapus data dengan mencari menggunakan fungsi hash dan menghapus dari bucket yang sesuai.

Searching: Mencari data dengan memasukkan kunci ke fungsi hash untuk menentukan posisi bucket dan mencari di dalam bucket tersebut.

Update: Memperbarui data dengan mencari dan memperbarui data yang ditemukan menggunakan fungsi hash.

Traversal: Memproses semua data dalam tabel hash.

**Penanganan Collision**

Collision terjadi ketika dua kunci menghasilkan nilai hash yang sama. Teknik penyelesaian collision meliputi:

Open Hashing (Chaining): Menyimpan semua item dengan nilai indeks yang sama ke dalam linked list.

**Closed Hashing:**

Linear Probing: Mencari posisi kosong di bawah tempat collision.

Quadratic Probing: Lompatannya berbentuk kuadratik (12, 22, 32, 42, ...).

Double Hashing: Menggunakan fungsi hash kedua untuk menentukan posisi kembali.


**GUIDED**

**GUIDED 1**

### Rekursif Langsung (Direct Recursion)
```C++
#include <iostream>
using namespace std;

// Fungsi ini berfungsi untuk melakukan hitung mundur
// dari angka yang diinputkan
void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan input nya
    cout << endl;
    return 0;
}
```
**BAGIAN 1**
```C++
#include <iostream>
using namespace std;
```
Interpretasi :

include iostream : Ini adalah preprocessor directive yang menyertakan pustaka input-output standar C++ ke dalam program. Ini diperlukan untuk menggunakan fungsi-fungsi dasar seperti cout dan cin untuk output dan input data.

using namespace std;: Ini adalah deklarasi yang mengizinkan penggunaan semua simbol dalam namespace std tanpa menuliskan std:: di depannya setiap kali digunakan. Namespace std berisi semua fungsi, tipe data, dan objek yang didefinisikan dalam pustaka standar C++

**BAGIAN 2**
```C++
// Fungsi ini berfungsi untuk melakukan hitung mundur
// dari angka yang diinputkan
void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}
```
Interpretasi :

Fungsi `countdown(int n)` adalah implementasi rekursif untuk melakukan hitung mundur dari angka yang diberikan sebagai parameter `n` hingga mencapai nol. Fungsi ini dimulai dengan memeriksa apakah `n` sama dengan nol; jika ya, fungsi berhenti dengan menggunakan `return` sebagai kasus dasar untuk menghentikan rekursi. Jika `n` bukan nol, fungsi mencetak nilai `n` diikuti oleh spasi, kemudian memanggil dirinya sendiri dengan nilai `n - 1`, mengurangi nilai `n` sebesar satu dan melanjutkan hitung mundur dengan nilai yang lebih kecil. Proses ini berulang hingga `n` mencapai nol, yang menghentikan rekursi dan menyelesaikan hitung mundur.

**BAGIAN 3**
```C++
int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan input nya
    cout << endl;
    return 0;
}
```
Interpretasi : 

Program ini dimulai dengan mencetak pesan ke konsol, lalu memanggil fungsi countdown untuk menghitung mundur dari angka 5, dan mengakhiri dengan mencetak baris baru. Fungsi countdown terus memanggil dirinya sendiri dengan mengurangi nilai n hingga mencapai 0, mencetak setiap angka dalam prosesnya.

### HASIL OUTPUT 
```C++
Rekursif Langsung: 5 4 3 2 1

--------------------------------
Process exited after 0.0903 seconds with return value 0
Press any key to continue . . .
```

**GUIDED 2**

### Rekursif Tidak Langsung (Indirect Recursion)
```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```
**BAGIAN 1**
```C++
#include <iostream>
using namespace std;
```
Interpretasi : 

include iostream : Ini adalah preprocessor directive yang menyertakan pustaka input-output standar C++ ke dalam program. Ini diperlukan untuk menggunakan fungsi-fungsi dasar seperti cout dan cin untuk output dan input data.

using namespace std;: Ini adalah deklarasi yang mengizinkan penggunaan semua simbol dalam namespace std tanpa menuliskan std:: di depannya setiap kali digunakan. Namespace std berisi semua fungsi, tipe data, dan objek yang didefinisikan dalam pustaka standar C++

**BAGIAN 2**
```C++
void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}
```
Interpretasi : 

Deklarasi `void functionB(int n);` di bagian atas menunjukkan bahwa ada fungsi bernama `functionB` yang akan diimplementasikan nanti dalam kode. 

Fungsi `functionA` dan `functionB` diimplementasikan secara bersamaan di bawahnya. Kedua fungsi ini memiliki panggilan rekursif yang tidak langsung satu sama lain, menciptakan interaksi yang kompleks di antara keduanya.

Pada dasarnya, fungsi `functionA` mencetak nilai `n` dan kemudian memanggil `functionB` dengan argumen `n - 1`, sedangkan fungsi `functionB` mencetak nilai `n` dan kemudian memanggil `functionA` dengan argumen `n / 2`. Proses ini berulang sampai kondisi berhenti terpenuhi. Jadi, keduanya saling memanggil dan bergantian dalam eksekusi.

**BAGIAN 3**
```C++
int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```
interpretasi :

Dalam fungsi `main`, sebuah variabel bernama `num` dideklarasikan dan diinisialisasi dengan nilai 5. Selanjutnya, pesan "Rekursif Tidak Langsung: " dicetak ke output menggunakan objek `cout`. Kemudian, fungsi `functionA` dipanggil dengan argumen `num`. Proses ini memulai eksekusi dari fungsi rekursif yang akan mencetak serangkaian nilai ke layar berdasarkan pemanggilan fungsi rekursif di dalamnya. Setelah eksekusi fungsi `functionA` selesai, nilai 0 akan dikembalikan sebagai nilai dari fungsi `main`, menandakan bahwa program telah berhasil dieksekusi tanpa terjadi kesalahan.

### HASIL OUTPUT 
```C++
Rekursif Tidak Langsung: 5 4 2 1
--------------------------------
Process exited after 0.08978 seconds with return value 0
Press any key to continue . . .
```
**GUIDED 3**

### Hash Table
```C++
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
```
**BAGIAN 1**
```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;
```
Interpretasi : 

Baris-baris pertama adalah direktif preprocessor (#include) yang mengimpor beberapa file header dari C++ standar. Ini memungkinkan program untuk menggunakan fitur-fitur seperti input-output (<iostream>), manipulasi string (<string>), dan penggunaan vektor (<vector>).

using namespace std; adalah deklarasi penggunaan namespace std, yang memungkinkan penggunaan semua fungsi dan kelas dari standar library C++ tanpa harus menambahkan std:: sebelumnya.

**BAGIAN 2**
```C++
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
```
Interpretasi : 

Kode ini mendefinisikan sebuah kelas `HashNode` yang digunakan untuk merepresentasikan node dalam struktur data hash table. Setiap objek dari kelas `HashNode` akan memiliki dua atribut: `name` dan `phone_number`, yang mewakili nama dan nomor telepon.

- `name`: Variabel bertipe string yang menyimpan nama.
- `phone_number`: Variabel bertipe string yang menyimpan nomor telepon.

Konstruktor `HashNode` digunakan untuk menginisialisasi objek `HashNode` dengan memberikan nilai awal kepada atribut `name` dan `phone_number` sesuai dengan argumen yang diberikan.

Selain itu, pada bagian awal kode, kita mendefinisikan konstanta `TABLE_SIZE` yang memiliki nilai 11. Konstanta ini akan digunakan untuk menentukan ukuran hash table yang akan dibuat.

Dengan definisi kelas `HashNode` ini, kita dapat membuat objek-objek yang akan digunakan untuk menyimpan data dalam hash table, di mana setiap objek `HashNode` akan merepresentasikan satu entri dalam tabel hash tersebut.

**BAGIIAN 3**
```C++
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

```
Interpretasi : 

Kelas `HashMap` adalah implementasi struktur data hash table yang memungkinkan penyimpanan dan pengelolaan pasangan kunci-nilai, di mana kunci adalah nama dan nilai adalah nomor telepon. Metode `insert` digunakan untuk menyisipkan pasangan kunci-nama dan nomor telepon ke dalam hash table, sementara metode `remove` digunakan untuk menghapus entri berdasarkan kunci. Metode `searchByName` memungkinkan pencarian nomor telepon berdasarkan nama, sementara metode `print` digunakan untuk mencetak seluruh isi hash table. Metode `hashFunc` digunakan untuk menghitung hash value dari sebuah kunci, yang kemudian digunakan untuk menentukan posisi penyimpanan dalam hash table. Dengan demikian, kelas `HashMap` memberikan alat yang efisien untuk menyimpan dan mengakses informasi yang berkaitan dengan nama dan nomor telepon dalam aplikasi C++.

**BAGIAN 4**
```C++

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
```
Interpretasi : 

Fungsi `main()` ini merupakan bagian dari program utama yang menggunakan kelas `HashMap` untuk mengelola data karyawan. Pada awalnya, tiga entri data karyawan dimasukkan ke dalam `employee_map` menggunakan metode `insert()`. Selanjutnya, nomor telepon dari karyawan dengan nama tertentu dicari menggunakan metode `searchByName()` dan dicetak ke layar. Kemudian, karyawan dengan nama "Mistah" dihapus dari `employee_map` menggunakan metode `remove()`, dan nomor teleponnya diperiksa kembali untuk memastikan bahwa karyawan tersebut telah dihapus. Terakhir, seluruh isi hash table `employee_map` dicetak ke layar menggunakan metode `print()`. Ini adalah contoh penggunaan praktis dari kelas `HashMap` untuk mengelola data dalam aplikasi C++.

### HASIL OUTPUT 
```C++
Nomer Hp Mistah : 1234
Phone Hp Pastah : 5678
Phone Hp Ghana : 91011
Nomer Hp Mistah setelah dihapus :

Hash Table :
0:
1:
2:
3:
4: [Pastah, 5678]
5:
6: [Ghana, 91011]
7:
8:
9:
10:

--------------------------------
Process exited after 0.08935 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED**

**UNGUIDED 1**

Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung
nilai faktorial dari sebuah inputan bilangan bulat positif!
```C++
#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    while (bilangan < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif: ";
        cin >> bilangan;
    }

    int hasil_faktorial = faktorial(bilangan);

    cout << "Faktorial dari " << bilangan << " adalah: " << hasil_faktorial << endl;

    return 0;
}
```
**BAGIAN 1**
```C++
#include <iostream>
using namespace std;
```
Interpretasi : 

include iostream : Ini adalah preprocessor directive yang menyertakan pustaka input-output standar C++ ke dalam program. Ini diperlukan untuk menggunakan fungsi-fungsi dasar seperti cout dan cin untuk output dan input data.

using namespace std;: Ini adalah deklarasi yang mengizinkan penggunaan semua simbol dalam namespace std tanpa menuliskan std:: di depannya setiap kali digunakan. Namespace std berisi semua fungsi, tipe data, dan objek yang didefinisikan dalam pustaka standar C++

**BAGIAN 2**
```C++
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
```
Interpretasi : 

Dalam kasus ini, fungsi tersebut secara efisien menghitung nilai faktorial dari bilangan bulat positif n dengan cara yang sederhana: jika n adalah 0 atau 1, nilai faktorialnya adalah 1; jika tidak, nilai faktorialnya adalah n dikalikan dengan nilai faktorial dari n - 1, yang kemudian dihitung secara rekursif. Pendekatan ini memberikan solusi yang jelas dan ringkas untuk permasalahan yang melibatkan perhitungan faktorial.

**BAGIAN 3**
```C++
int main() {
    int bilangan;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    while (bilangan < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif: ";
        cin >> bilangan;
    }

    int hasil_faktorial = faktorial(bilangan);

    cout << "Faktorial dari " << bilangan << " adalah: " << hasil_faktorial << endl;

    return 0;
}
```
Interpretasi : 

Pertama-tama, program meminta pengguna untuk memasukkan bilangan bulat positif. Jika bilangan yang dimasukkan kurang dari 0, program akan terus meminta input yang valid. Setelah menerima input yang valid, program menghitung faktorial dari bilangan tersebut dengan memanggil fungsi faktorial() dan kemudian menampilkan hasilnya ke layar bersama dengan pesan yang sesuai. Ini adalah bagian utama dari program yang menggunakan fungsi rekursif faktorial() untuk menghitung nilai faktorial.

### HASIL OUTPUT 
```C++
Masukkan bilangan bulat positif: 10
Faktorial dari 10 adalah: 3628800

--------------------------------
Process exited after 1.175 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED 2**
```C++
#include <iostream>
using namespace std;

int faktorial(int n);

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    while (bilangan < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif: ";
        cin >> bilangan;
    }

    int hasil_faktorial = faktorial(bilangan);

    cout << "Faktorial dari " << bilangan << " adalah: " << hasil_faktorial << endl;

    return 0;
}
```
**BAGIAN 1**
```C++
#include <iostream>
using namespace std;
```
Interpretasi : 

include iostream : Ini adalah preprocessor directive yang menyertakan pustaka input-output standar C++ ke dalam program. Ini diperlukan untuk menggunakan fungsi-fungsi dasar seperti cout dan cin untuk output dan input data.

using namespace std;: Ini adalah deklarasi yang mengizinkan penggunaan semua simbol dalam namespace std tanpa menuliskan std:: di depannya setiap kali digunakan. Namespace std berisi semua fungsi, tipe data, dan objek yang didefinisikan dalam pustaka standar C++

**BAGIAN  2**
```C++
int faktorial(int n);

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
```
Interpretasi : 

Pertama, fungsi dideklarasikan dengan tipe pengembalian int dan satu parameter n, yang memberitahu kompiler tentang tanda tangan fungsi tersebut. Kemudian, fungsi diimplementasikan dengan logika untuk menghitung faktorial secara rekursif. Jika nilai n adalah 0 atau 1, fungsi mengembalikan 1 sebagai kasus dasar. Namun, jika n lebih besar dari 1, fungsi akan memanggil dirinya sendiri dengan parameter n - 1 dan mengalikan hasilnya dengan n, memberikan nilai faktorial dari n. Dengan cara ini, deklarasi dan implementasi fungsi faktorial() memungkinkan penggunaan rekursi untuk menghitung nilai faktorial dengan benar.

**BAGIAN 3**
```C++
int main() {
    int bilangan;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    while (bilangan < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif: ";
        cin >> bilangan;
    }

    int hasil_faktorial = faktorial(bilangan);

    cout << "Faktorial dari " << bilangan << " adalah: " << hasil_faktorial << endl;

    return 0;
}
```
Interpretasi : 

Program ini meminta pengguna untuk memasukkan sebuah bilangan bulat positif, kemudian melakukan validasi untuk memastikan bahwa input yang dimasukkan oleh pengguna memang bilangan bulat positif. Selanjutnya, program memanggil fungsi faktorial() untuk menghitung nilai faktorial dari bilangan yang dimasukkan pengguna, dan hasilnya kemudian ditampilkan ke layar. Setelah selesai, program mengembalikan nilai 0, menandakan bahwa program telah berhasil dieksekusi dengan sukses.

### HASIL OUTPUT 
```C++
Masukkan bilangan bulat positif: 10
Faktorial dari 10 adalah: 3628800

--------------------------------
Process exited after 2.936 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED 3**

Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa
memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru,
menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan
nilai. Dengan ketentuan :
a. Setiap mahasiswa memiliki NIM dan nilai.
b. Program memiliki tampilan pilihan menu berisi poin C.
c. Implementasikan fungsi untuk menambahkan data baru, menghapus data,
mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai
(80 – 90).

```C++
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
```
**BAGIAN 1**
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
```
Interpretasi : 

#include <iostream>: Pustaka ini digunakan untuk input dan output, seperti cout untuk output ke console.

#include <string>: Pustaka ini menyediakan tipe data std::string yang digunakan untuk manipulasi string.

#include <vector>: Pustaka ini menyediakan template kelas std::vector, yang merupakan salah satu tipe container sequence di C++.

**BAGIAN 2**
```C++
struct Mahasiswa {
    string nim;
    int nilai;
};

const int TABLE_SIZE = 100;
```
Interpretasi : 

Kode tersebut mendefinisikan sebuah struktur `Mahasiswa` yang memiliki dua anggota: `string nim` untuk menyimpan Nomor Induk Mahasiswa dan `int nilai` untuk menyimpan nilai mahasiswa. Selain itu, didefinisikan juga sebuah konstanta `TABLE_SIZE` dengan nilai 100, yang biasanya digunakan untuk menentukan ukuran dari sebuah tabel atau array yang akan menyimpan beberapa objek `Mahasiswa`.

**BAGIAN 3**
```C++
class HashNode {
public:
    Mahasiswa data;
    HashNode* next;

    HashNode(Mahasiswa data) : data(data), next(NULL) {}
};
```
Interpretasi : 

Kelas `HashNode` mendefinisikan sebuah node untuk digunakan dalam struktur data hash table, di mana setiap node menyimpan data berupa objek `Mahasiswa` dan sebuah pointer `next` yang menunjuk ke node berikutnya dalam rantai linked list untuk mengatasi collision dengan metode chaining. Kelas ini memiliki konstruktor yang menginisialisasi anggota `data` dengan objek `Mahasiswa` yang diberikan dan mengatur pointer `next` ke `NULL`, menandakan bahwa node awalnya tidak menunjuk ke node lain. Anggota `data` dan `next` bersifat publik, sehingga dapat diakses dari luar kelas.

**BAGIAN 4**
```C++
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
```
Interpretasi :

Kelas `HashMap` mengimplementasikan hash table dengan teknik chaining untuk mengelola data mahasiswa, menggunakan `vector<HashNode*>` sebagai tabel hash berukuran `TABLE_SIZE`. Fungsi hash `hashFunc` mengonversi NIM mahasiswa menjadi indeks tabel dengan menjumlahkan nilai ASCII dari karakter-karakter NIM. Konstruktornya menginisialisasi tabel dengan elemen `NULL`. Fungsi publiknya meliputi `tambahData` untuk menambahkan data mahasiswa, `hapusData` untuk menghapus data berdasarkan NIM, `cariDataNIM` untuk mencari data berdasarkan NIM, dan `cariDataRentangNilai` untuk mencari mahasiswa dengan nilai antara 80 dan 90. Fungsi `tampilkanMenu` menampilkan opsi untuk menambah, menghapus, mencari data mahasiswa, atau keluar dari program. Dalam fungsi `main`, objek `HashMap` dibuat dan menu ditampilkan dalam loop, di mana pilihan pengguna menentukan fungsi `HashMap` yang dipanggil, seperti menambahkan, menghapus, atau mencari data mahasiswa, atau keluar dari program.

### HASIL OUTPUT 
```C++
Menu:
1. Tambah data mahasiswa
2. Hapus data mahasiswa
3. Cari data mahasiswa berdasarkan NIM
4. Cari data mahasiswa berdasarkan rentang nilai (80-90)
5. Keluar
Pilih: 1
Masukkan NIM mahasiswa: 2311110046
Masukkan nilai mahasiswa: 90
Menu:
1. Tambah data mahasiswa
2. Hapus data mahasiswa
3. Cari data mahasiswa berdasarkan NIM
4. Cari data mahasiswa berdasarkan rentang nilai (80-90)
5. Keluar
Pilih: 1
Masukkan NIM mahasiswa: 2311110036
Masukkan nilai mahasiswa: 100
Menu:
1. Tambah data mahasiswa
2. Hapus data mahasiswa
3. Cari data mahasiswa berdasarkan NIM
4. Cari data mahasiswa berdasarkan rentang nilai (80-90)
5. Keluar
Pilih: 2
Masukkan NIM mahasiswa yang ingin dihapus: 2311110036
Menu:
1. Tambah data mahasiswa
2. Hapus data mahasiswa
3. Cari data mahasiswa berdasarkan NIM
4. Cari data mahasiswa berdasarkan rentang nilai (80-90)
5. Keluar
Pilih: 3
Masukkan NIM mahasiswa yang ingin dicari: 2311110036
Mahasiswa dengan NIM 2311110036 ditemukan. Nilainya: 100
Menu:
1. Tambah data mahasiswa
2. Hapus data mahasiswa
3. Cari data mahasiswa berdasarkan NIM
4. Cari data mahasiswa berdasarkan rentang nilai (80-90)
5. Keluar
Pilih: 4
Mahasiswa dengan nilai antara 80 dan 90:
NIM: 2311110046, Nilai: 90
Menu:
1. Tambah data mahasiswa
2. Hapus data mahasiswa
3. Cari data mahasiswa berdasarkan NIM
4. Cari data mahasiswa berdasarkan rentang nilai (80-90)
5. Keluar
Pilih: 5
Keluar dari program.

--------------------------------
Process exited after 81.53 seconds with return value 0
Press any key to continue . . .
```

**DAFTAR PUSTAKA**

Lutfina, E., Inayati, N., & Saraswati, G. W. (2022). Analisis Perbandingan Kinerja Metode Rekursif dan Metode Iteratif dalam Algoritma Linear Search. Komputika : Jurnal Sistem Komputer, 11(2), 143–150. https://doi.org/10.34010/komputika.v11i2.5493

Herman, S. (2017). ILKOM Jurnal Ilmiah Volume 9 Nomor 3 Desember 2017. ILKOM Jurnal Ilmiah, 9(3), 262–267.

Maysanjaya, I. M. D. (2013). Penerapan Algoritma Rekursif dan Pengolahan Citra Digital Untuk Pembuatan Motif Batik Guna Menambah Khazanah Budaya Batik Indonesia. Prosiding Konferensi Nasional Informatika, 71–75.
