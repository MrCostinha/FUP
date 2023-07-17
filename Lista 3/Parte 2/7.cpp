#include <iostream>
#include <clocale>
#include <cwchar>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    srand(time(NULL));

    int tempCrateus[31], menorTemp = 0, maiorTemp = 0, media, acimaMedia = 0, abaixoMedia = 0;

    for (int i = 0; i < 31; i++) {
        tempCrateus[i] = rand()%18 + 22;
        media += tempCrateus[i];
    }

    media /= 31;

    for (int i = 0; i < 31; i++) {
        if (tempCrateus[i] > media) {
            acimaMedia++;
        } else if (tempCrateus[i] < media) {
            abaixoMedia++;
        }
        if (tempCrateus[i] < tempCrateus[menorTemp]) {
            menorTemp = i;
        }
        if (tempCrateus[i] > tempCrateus[maiorTemp]) {
            maiorTemp = i;
        }
    }

    wcout << "Dia com a menor temperatura: " << menorTemp+1 << ", " << tempCrateus[menorTemp] << L"°C" << endl;
    wcout << "Dia com a maior temperatura: "<< maiorTemp+1 << ", " << tempCrateus[maiorTemp] << L"°C" << endl;
    wcout << L"Temperatura média: " << media << L"°C" << endl;
    wcout << L"Dias com temperatura acima da média: " << acimaMedia << endl;
    wcout << L"Dias com temperatura abaixo da média: " << abaixoMedia << endl;



    return 0;
}