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

