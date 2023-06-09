#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int acimaMedia = 0;
    float notas[20], soma = 0, media;

    for (int i = 0; i < 20; i++) {
        cout << "Insira a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        if (notas[i] >= 7) {
            acimaMedia++;
        }
        soma += notas[i];
    }

    media = soma/20.0;

    wcout << L"Média da turma: " << media << endl;
    wcout << L"Alunos acima da média: " << acimaMedia << endl;

    return 0;
}