#include <iostream>
using namespace std;


const int SIZE = 4;

int main() {
    setlocale(LC_CTYPE, "rus");

    float a[SIZE][SIZE];
    float b[SIZE];
    float c[SIZE] = { 0 };

    cout << "Введите элементы матрицы a (4x4):" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Введите элементы вектора b (4 элемента):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            c[i] += a[i][j] * b[j];
        }
    }

    cout << "Результирующий вектор c:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

}