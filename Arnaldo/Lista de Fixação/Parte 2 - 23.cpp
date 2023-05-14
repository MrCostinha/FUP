#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int jogadores, maior = 0, qtd_empatados = 0;
    bool empate = false;

    cout << "Quantidade de jogadores: ";
    cin >> jogadores;
    cout << endl;
    int jogador[jogadores], empatados[jogadores];

    for (int i = 0; i < jogadores; i++) {
        jogador[i] = rand()%6+1;
        cout << "Jogador " << i+1 << ": " << jogador[i] << endl;

        if (i == 0) {
            maior = i;
        }
        if (jogador[i] > jogador[maior]) {
            maior = i;
        } else if (jogador[i] == jogador[maior]) {
            empatados[i] = jogador[i];
            qtd_empatados ++;
            empate = true;
        }
    }
    
    while (empate == true) {
        cout << "\nEmpatados: ";
        
        for (int i = 0; i < qtd_empatados; i++) {
            if (jogador[i] == empatados[i]) {
                cout << empatados[i] << " ";
                
            }
        }

        cout << endl << "\nNovo sorteio\n" << endl;

        for (int i = 0; i < qtd_empatados; i++) {
            empatados[i] = rand()%6+1;
            cout << "Jogador " << i+1 << ": " << empatados[i] << endl;

            if (empatados[i] > empatados[maior]) {
                maior = i;
                empate = false;
                break;
            }
            empate = false;
        }
    }

    wcout << L"\nO jogador número " << maior+1 << L" começa";

    return 0;
}