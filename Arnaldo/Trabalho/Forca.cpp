#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm> // find

using namespace std;

struct tema {
    vector<string> palavra;
};

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

void printTemaSorteado(int temaSorteado) {
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
        case 3:
            cout << "Tema: Geografia" << endl;
            break;
        case 4:
            cout << "Tema: Esportes" << endl;
            break;
    }
}
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
void printLetras(vector<char>& chutes) {
    cout << "Letras chutadas: ";
    for (int i = 0; i < chutes.size(); i++) {
        cout << chutes[i] << " ";
    }
    cout << endl;
}
void printPalavras(vector<string>& chutes) {
    cout << "Palavras chutadas: ";
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

    tema frutas, animais, cores, geografia, esportes;
    frutas.palavra = {"abacaxi", "jaca", "acerola", "melancia", "banana", "uva", "laranja", "manga", "morango"};
    animais.palavra = {"cachorro", "gato", "jabuti", "coelho", "tucano", "papagaio", "macaco", "girafa"};
    cores.palavra = {"laranja", "verde", "preto", "branco", "azul", "vermelho", "amarelo", "roxo", "rosa"};
    geografia.palavra = {"brasil", "russia", "india", "china", "argentina", "colombia", "uruguai", "paraguai"};
    esportes.palavra = {"futebol", "volei", "ciclismo", "basquete", "tenis", "natacao", "handebol", "atletismo"};

    vector<char> letrasChutadas;
    vector<string> palavrasChutadas;
    int erros = 0;

    int temaSorteado = rand()%5;
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
        case 3:
            palavraSorteada = geografia.palavra[rand()%geografia.palavra.size()];
            break;
        case 4:
            palavraSorteada = esportes.palavra[rand()%esportes.palavra.size()];
            break;
    }

    string progresso(palavraSorteada.size(), ' ');

    cout << "Bem-Vindo ao Jogo da Forca!" << endl;
    printTemaSorteado(temaSorteado);
    cout << palavraSorteada.size() << " letras" << endl << endl;

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
                chute_letra = chutarLetra(letrasChutadas);
                verificaLetra(palavraSorteada, progresso, chute_letra, erros);
                break;
            case 'p':
                cout << "Palavra: ";
                cin >> chute_palavra;
                palavrasChutadas.push_back(chute_palavra);
                verificaPalavra(palavraSorteada, progresso, chute_palavra, erros);
                break;
            default:
                cout << "Opção Inválida!";
        }
        printLetras(letrasChutadas);
        printPalavras(palavrasChutadas);

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