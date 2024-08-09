#include <iostream>
using namespace std;

const int SIZE = 12;

void initialize(bool bubbleWrap[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            bubbleWrap[i][j] = true;
        }
    }
}

void displayBubbleWrap(const bool bubbleWrap[SIZE][SIZE]) {
    cout << "Состояние пупырки:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << (bubbleWrap[i][j] ? 'o' : 'x') << ' ';
        }
        cout << endl;
    }
}

void popBubbles(bool bubbleWrap[SIZE][SIZE], int x1, int y1, int x2, int y2) {
    if (x1 < 0 || x1 >= SIZE || y1 < 0 || y1 >= SIZE || x2 < 0 || x2 >= SIZE || y2 < 0 || y2 >= SIZE) {
        cout << "Ошибка: Координаты вне допустимого диапазона!" << endl;
        return;
    }

    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            if (bubbleWrap[i][j]) {
                bubbleWrap[i][j] = false;
                cout << "Pop!" << endl;
            }
        }
    }
}

bool areAllBubblesPopped(const bool bubbleWrap[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (bubbleWrap[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    setlocale(LC_CTYPE, "rus");

    bool bubbleWrap[SIZE][SIZE];

    initialize(bubbleWrap);

    while (true) {
        displayBubbleWrap(bubbleWrap);

        if (areAllBubblesPopped(bubbleWrap)) {
            cout << "Все пузырьки лопнуты!" << endl;
            break;
        }

        int x1, y1, x2, y2;
        cout << "Введите координаты углов прямоугольника для лопания (x1 y1 x2 y2): ";
        cin >> x1 >> y1 >> x2 >> y2;

        popBubbles(bubbleWrap, x1, y1, x2, y2);
    }

}