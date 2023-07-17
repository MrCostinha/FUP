#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    string maiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letra = rand()%26;

    wcout << L"Letra maiúscula sorteada: " << maiusculas[letra];

    return 0;
}