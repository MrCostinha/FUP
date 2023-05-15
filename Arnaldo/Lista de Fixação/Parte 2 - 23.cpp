#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int jogadores, maior = 0, empatados = 0;
    bool empate = false;

    cout << "Quantidade de jogadores: ";
    cin >> jogadores;
    cout << endl;

    int jogador[jogadores], empatado[jogadores];

    for (int i = 0; i < jogadores; i++) {
        jogador[i] = rand()%6+1;
        cout << "Jogador " << i+1 << ": " << jogador[i] << endl;

        if (jogador[i] > jogador[maior]) {
            maior = i;
        } else if (jogador[i] == jogador[maior]) {
            empatado[empatados] = jogador[i];
            empatados ++;
            empate = true;
        }
    }

    while (empate) {
        cout << "\nEmpatados: ";

        for (int i = 0; i < empatados; i++) {
            cout << "Jogador " << empatado[i] << " ";
        }

        cout << endl << "\nNovo sorteio\n" << endl;

        for (int i = 0; i < empatados; i++) {
            jogador[empatado[i]] = rand()%6+1;
            cout << "Jogador " << i+1 << ": " << jogador[empatado[i]] << endl;

            if (jogador[empatado[i]] > jogador[maior]) {
                maior = empatado[i];
                empate = false;
            } else if (jogador[empatado[i]] == jogador[maior]) {
                empate = true;
            }
        }

        if (!empate) {
            break;
        }

        empatados = 0;
        for (int i = 0; i < jogadores; i++) {
            if (jogador[i] == jogador[maior]) {
                empatado[empatados] = i;
                empatados ++;
            }
        }
    }

    wcout << L"\nO jogador número " << maior+1 << L" começa";

    return 0;
}