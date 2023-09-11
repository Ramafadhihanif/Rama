
#include <iostream>
using namespace std;

int main() {
    float angka1, angka2;
    char operasi;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (operasi) {
        case '+':
            cout << "Hasil: " << angka1 + angka2;
            break;
        case '-':
            cout << "Hasil: " << angka1 - angka2;
            break;
        case '*':
            cout << "Hasil: " << angka1 * angka2;
            break;
        case '/':
            if (angka2 == 0) {
                cout << "Tidak bisa melakukan pembagian dengan 0";
            } else {
                cout << "Hasil: " << angka1 / angka2;
            }
            break;
        default:
            cout << "Operator tidak valid";
            break;
    }

    return 0;
}
