#include <iostream>
using namespace std;


const int SIZE = 4;

bool compareMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void makeDiagonal(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i != j) {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_CTYPE, "rus");

    int A[SIZE][SIZE], B[SIZE][SIZE];

    cout << "Введите элементы матрицы A (4x4):" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Введите элементы матрицы B (4x4):" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> B[i][j];
        }
    }

    if (compareMatrices(A, B)) {
        cout << "Матрицы равны. Преобразуем матрицу A в диагональную:" << endl;
        makeDiagonal(A);
        printMatrix(A);
    }
    else {
        cout << "Матрицы не равны." << endl;
    }
}