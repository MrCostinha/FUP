#include <iostream>

using namespace std;

int main() {
    int aux = 4;

    for (int linha = 1; linha <= 7; linha++) {
        if (linha > 2 && linha < 6) {
            aux--;
        }
        for (int coluna = 1; coluna <= 7; coluna++) {
            switch (linha) {
                case 1:
                    if (coluna == 4) {
                        cout << "*  ";
                    } else {
                        cout << "   ";
                    }
                    break;
                case 6:
                    if (coluna == 3 || coluna == 5) {
                        cout << "|  ";
                    } else {
                        cout << "   ";
                    }
                    break;
                case 7:
                    if (coluna >= 3 && coluna <= 5) {
                        cout << "_  ";
                    } else {
                        cout << "   ";
                    }
                    break;
                default:
                    if (coluna >= aux && coluna <= 7-aux + 1) {
                        cout << "A  ";
                    } else {
                        cout << "   ";
                    }
                    break;
            }
        }
        cout << endl;
    }

    return 0;
}