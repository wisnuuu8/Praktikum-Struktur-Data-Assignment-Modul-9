**BAB 1**

**PENDAHULUAN**

**LATAR BELAKANG**

### Rekursif

Rekursif adalah metode dalam pemrograman di mana sebuah fungsi memanggil dirinya sendiri secara langsung atau tidak langsung untuk menyelesaikan sebuah masalah. Teknik ini sering digunakan untuk menyederhanakan solusi dari masalah yang kompleks dengan memecahnya menjadi sub-masalah yang lebih sederhana dan berulang. Rekursif biasanya memiliki dua komponen utama:

Base Case (Kasus Dasar): Kondisi yang akan menghentikan rekursi. Tanpa base case, rekursi akan terus berjalan tanpa henti (infinite loop).
Recursive Case (Kasus Rekursif): Bagian dari fungsi yang memecah masalah menjadi sub-masalah yang lebih kecil dan memanggil fungsi itu sendiri dengan sub-masalah tersebut.
Contoh umum dari penggunaan rekursif adalah dalam perhitungan faktorial, pencarian di struktur data seperti pohon, dan algoritma pembagian seperti Merge Sort dan Quick Sort.

### Hash Table

Hash Table adalah struktur data yang mengimplementasikan sebuah array asosiatif, sebuah struktur data yang dapat memetakan kunci (key) ke nilai (value). Hash table menggunakan fungsi hash untuk menghitung indeks dari array di mana nilai yang diinginkan dapat ditemukan atau disimpan. Fungsi hash mengambil input kunci dan mengembalikan indeks array di mana nilai terkait akan ditempatkan.

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

### Konsep Rekursif

Rekursif adalah proses di mana sebuah fungsi atau prosedur memanggil dirinya sendiri. Proses ini dapat berulang kali terjadi hingga kondisi tertentu terpenuhi untuk mengakhiri rekursi. Rekursi terdiri dari dua jenis:

Rekursi Langsung: Fungsi memanggil dirinya sendiri secara langsung.

Rekursi Tidak Langsung: Fungsi memanggil dirinya sendiri melalui fungsi lain.

### Kelebihan Rekursif:

Kode lebih singkat dan mudah dimengerti.

Efektif untuk masalah yang bisa dipecah menjadi sub-tugas serupa, seperti penjelajahan struktur data pohon.

Kode rekursif sering lebih elegan dibandingkan dengan pendekatan iteratif.

### Kekurangan Rekursif:

Menggunakan ruang memori lebih besar karena setiap pemanggilan rekursif menambah overhead pada call stack.

Beberapa implementasi rekursif mungkin kurang efisien dalam hal waktu.

Kesulitan dalam pemahaman konsep oleh beberapa programmer dapat menimbulkan bug.

### Ilustrasi Rekursif:

Fungsi rekursif biasanya memiliki:

Base Case (Kasus Dasar): Menghentikan rekursi.

Recursive Case (Kasus Rekursif): Memecah masalah menjadi sub-masalah dan memanggil fungsi itu sendiri.

### Konsep Hash Table

Hash Table adalah struktur data yang mengorganisir data ke dalam pasangan kunci-nilai menggunakan fungsi hash untuk memetakan kunci ke indeks array.

### Fungsi Hash:

Fungsi hash membuat pemetaan antara kunci dan nilai menggunakan rumus matematika. Hasil dari fungsi ini adalah nilai hash yang digunakan sebagai indeks array.

### Operasi Hash Table:

Insertion: Menambahkan data baru dengan menentukan posisi bucket menggunakan fungsi hash.

Deletion: Menghapus data dengan mencari menggunakan fungsi hash dan menghapus dari bucket yang sesuai.

Searching: Mencari data dengan memasukkan kunci ke fungsi hash untuk menentukan posisi bucket dan mencari di dalam bucket tersebut.

Update: Memperbarui data dengan mencari dan memperbarui data yang ditemukan menggunakan fungsi hash.

Traversal: Memproses semua data dalam tabel hash.

### Penanganan Collision:

Collision terjadi ketika dua kunci menghasilkan nilai hash yang sama. Teknik penyelesaian collision meliputi:

Open Hashing (Chaining): Menyimpan semua item dengan nilai indeks yang sama ke dalam linked list.

### Closed Hashing:

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

### HASIL OUTPUT 
```C++
Rekursif Tidak Langsung: 5 4 2 1
--------------------------------
Process exited after 0.08978 seconds with return value 0
Press any key to continue . . .
```
