#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int cutlery[2][6] = {
        {3, 3, 3, 3, 3, 3},
        {3, 3, 3, 3, 3, 3}
    };

    cutlery[0][0]++;
    cutlery[0][1]++;

    int plates[2][6] = {
        {2, 2, 2, 2, 2, 2},
        {2, 2, 2, 2, 2, 2}
    };

    plates[0][0]++;
    plates[0][1]++;

    int chairs[2][6] = {
        {1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1}
    };

    chairs[0][4]++;

    cutlery[1][2]--;

    cutlery[0][0]--; 
    cutlery[1][2]++;

    plates[0][0]--;

    cout << "Приборы (вилка, ложка, нож) для каждого места:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << cutlery[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nТарелки для каждого места:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << plates[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nСтулья для каждого места:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << chairs[i][j] << " ";
        }
        cout << endl;
    }
}
