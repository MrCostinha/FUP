#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int jogadores, maior = 0, empatados = 1;
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
            empatado[0] = i+1;
            empate = false;
        } else if (jogador[i] == jogador[maior] && i != maior) {
            empatado[empatados] = i+1;
            empatados ++;
            empate = true;
        }
    }

    if (empate) {
        for (int i = 0; i < empatados; i++) {
            cout <<"\nEmpatado " << i+1 << ": Jogador " << empatado[i] << " ";
        }
        
        maior = rand()%empatados+1;
        
        cout << "\nNovo sorteio entre os empatados" << endl;
        wcout << "\nO empatado " << empatados << L" começa!";
    } else {
        wcout << "\nO jogador " << maior+1 << L" começa!";
    }

    return 0;
}