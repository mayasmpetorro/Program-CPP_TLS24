#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Kalkulator Sederhana\n";
    cout << "Pilih operasi yang diinginkan:\n";
    cout << "1. Penjumlahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "3. Perkalian (*)\n";
    cout << "4. Pembagian (/)\n";
    cout << "Masukkan operasi yang diinginkan (+, -, *, /): ";
    cin >> operation;

    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    if (operation == '+') {
        result = num1 + num2;
        cout << "Hasil: " << result << endl;
    } else if (operation == '-') {
        result = num1 - num2;
        cout << "Hasil: " << result << endl;
    } else if (operation == '*') {
        result = num1 * num2;
        cout << "Hasil: " << result << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Hasil: " << result << endl;
        } else {
            cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
        }
    } else {
        cout << "Operasi tidak valid.\n";
    }

    return 0;
}