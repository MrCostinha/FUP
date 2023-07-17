#include <iostream>
#include <clocale>
#include <cwchar>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    srand(time(NULL));

    int pc, usuario, wins_pc = 0, wins_usuario = 0;

    do {
        wcout << L"Escolha uma opção:" << endl << "1 - Pedra\t" << "2 - Papel\t"<< "3 - Tesoura" << endl;
        cin >> usuario;

        pc = rand()%3+1;

        if (usuario==1 && pc==2 || usuario==2 && pc==3 || usuario==3 && pc==1) {
            wins_pc++;
        } else if (usuario==1 && pc==3 || usuario==2 && pc==1 || usuario==3 && pc==2) {
            wins_usuario++;
        }
    } while (wins_pc<5 && wins_usuario<5);

    if (wins_pc == 5) {
        cout << "O computador venceu!";
    } else if (wins_usuario == 5) {
        wcout << L"Você venceu!";
    }

    return 0;
}
