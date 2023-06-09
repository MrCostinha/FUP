#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <cstring> // string

using namespace std;

char alteraCaractere(char* endereco, int x) {
    string alfabeto_m = "abcdefghijklmnopqrstuvwxyz";
    string alfabeto_M = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < 26; i++) {
        if (*endereco == alfabeto_m[i]) {
            return *endereco = alfabeto_m[(i+x)%26];
        } else if (*endereco == alfabeto_M[i]) {
            return *endereco = alfabeto_M[(i+x)%26];
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    char* ptr = new char;
    int x;

    cout << "Insira uma letra: ";
    cin >> *ptr;

    wcout << L"Insira um número: ";
    cin >> x;

    cout << "Nova letra: " << alteraCaractere(ptr, x) << endl;

    delete ptr;

    return 0;
}