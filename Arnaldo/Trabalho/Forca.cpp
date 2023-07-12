#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

struct tema {
    vector<string> palavra;
};

void printProgresso(string& progresso) {
    for (int i = 0; i < progresso.size(); i++) {
        if (progresso[i] == ' ') {
            cout << "_";
        } else {
            cout << progresso[i];
        }
    }
    cout << endl;
}
char chutarLetra(vector<char>& chutes) {
    char letra;
    cout << "Letra: ";
    while (true) {
        cin >> letra;
        if (find(chutes.begin(), chutes.end(), letra) != chutes.end()) {
            cout << "Você já chutou essa letra! Tente outra: ";
        } else {
            chutes.push_back(letra);
            break;
        }
    }
    return letra;
}
void verificaLetra(string& palavra, string& progresso, char chute, int& erros) {
    bool acertou = false;
    for (int i = 0; i < palavra.size(); i++) {
        if (palavra[i] == chute) {
            progresso[i] = chute;
            acertou = true;
        }
    }
    if (acertou == false) {
        erros++;
    }
}
void verificaPalavra(const string& palavra, string& progresso, string chute, int& erros) {
    if (palavra == chute) {
        for (int i = 0; i < progresso.size(); i++) {
            progresso[i] = palavra[i];
        }
    } else {
        erros++;
    }
}
void printChutes(vector<char>& chutes) {
    cout << "Chutes: ";
    for (int i = 0; i < chutes.size(); i++) {
        cout << chutes[i] << " ";
    }
    cout << endl;
}
void printStatus(int erros){
    switch(erros) {
    case 1:
        cout << endl << "Status: " << endl;
        cout << "  O" << endl << endl;
        break;
    case 2:
        cout << endl << "Status: " << endl;
        cout << "  O" << endl;
        cout << "  |" << endl << endl;
        break;
    case 3:
        cout << endl << "Status: " << endl;
        cout << "  O" << endl;
        cout << " /|" << endl << endl;
        break;
    case 4:
        cout << endl << "Status: " << endl;
        cout << "  O" << endl;
        cout << " /|\\" << endl << endl;
        break;
    case 5:
        cout << endl << "Status: " << endl;
        cout << "  O" << endl;
        cout << " /|\\" << endl;
        cout << " /" << endl << endl;
        break;
    case 6:
        cout << endl << "Status: " << endl;
        cout << "  O" << endl;
        cout << " /|\\" << endl;
        cout << " / \\" << endl << endl;
        break;
    }
}

int main() {
    srand(time(NULL));

    tema frutas, animais, cores;
    frutas.palavra = {"abacaxi", "jaca", "acerola", "melancia", "banana", "uva", "laranja"};
    animais.palavra = {"cachorro", "gato", "jabuti", "coelho", "tucano", "papagaio"};
    cores.palavra = {"laranja", "verde", "preto", "branco", "azul", "vermelho", "amarelo"};
    
    vector<char> chutes;
    int erros = 0;

    int temaSorteado = rand()%3;
    string palavraSorteada;

    switch (temaSorteado) {
        case 0:
            palavraSorteada = frutas.palavra[rand()%frutas.palavra.size()];
            break;
        case 1:
            palavraSorteada = animais.palavra[rand()%animais.palavra.size()];
            break;
        case 2:
            palavraSorteada = cores.palavra[rand()%cores.palavra.size()];
            break;
    }

    string progresso(palavraSorteada.size(), ' ');

    cout << "Bem-Vindo ao Jogo da Forca!" << endl;

    switch (temaSorteado) {
        case 0:
            cout << "Tema: Frutas" << endl;
            break;
        case 1:
            cout << "Tema: Animais" << endl;
            break;
        case 2:
            cout << "Tema: Cores" << endl;
            break;
    }

    cout << palavraSorteada.size() << " letras" << endl;

    while(erros < 6) {
        char opcao;
        char chute_letra;
        string chute_palavra;

        cout << "Palavra: ";
        printProgresso(progresso);
        
        cout << endl << "L para chutar uma letra ou P para chutar a palavra: ";
        cin >> opcao;

        switch(opcao) {
            case 'l':
                chute_letra = chutarLetra(chutes);
                verificaLetra(palavraSorteada, progresso, chute_letra, erros);
                break;
            case 'p':
                cout << "Palavra: ";
                cin >> chute_palavra;
                verificaPalavra(palavraSorteada, progresso, chute_palavra, erros);
                break;
            default:
                cout << "Opção Inválida!";
        }
        printChutes(chutes);

        printStatus(erros);

        if (progresso == palavraSorteada) {
            cout << "Parabéns! Você acertou a palavra: " << palavraSorteada << endl;
            break;
        } else if (erros == 6) {
            cout << "Você perdeu! A palavra era: " << palavraSorteada << endl;
            break;
        }
    }

    return 0;
}