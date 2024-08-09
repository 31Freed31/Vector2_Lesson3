#include <iostream>
using namespace std;

void initializeField(char field[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            field[i][j] = ' ';
        }
    }
}

void printField(const char field[3][3]) {
    cout << "  0 1 2\n";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << field[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "  -----\n";
    }
}

bool checkWin(const char field[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((field[i][0] == player && field[i][1] == player && field[i][2] == player) ||
            (field[0][i] == player && field[1][i] == player && field[2][i] == player)) {
            return true;
        }
    }
    return false;
}

void playGame() {
    char field[3][3];
    initializeField(field);
    char currentPlayer = 'X';
    int moves = 0;

    while (moves < 9) {
        printField(field);
        int row, col;
        cout << "Игрок " << currentPlayer << ", введите координаты вашего хода (строка и столбец): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || field[row][col] != ' ') {
            cout << "Некорректный ход. Попробуйте еще раз.\n";
            continue;
        }

        field[row][col] = currentPlayer;
        moves++;

        if (checkWin(field, currentPlayer)) {
            printField(field);
            cout << "Игрок " << currentPlayer << " победил!\n";
            return;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    printField(field);
    cout << "Ничья! Игра окончена.\n";
}

int main() {
    setlocale(LC_CTYPE, "rus");
    playGame();
}