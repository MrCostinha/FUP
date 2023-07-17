/*1. Desenvolva uma função que receba como parâmetros as coordenadas x e y de 3 pontos e retorne qual
a maior distância entre eles.*/
#include <iostream>
#include <clocale>
#include <cwchar>
#include <cmath>

using namespace std;

int maior_distancia(float x1, float y1, float x2, float y2, float x3, float y3) {
    float dAB, dAC, dBC, maior;

    dAB = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    dAC = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
    dBC = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));

    if (dAB >= dAC && dAB >= dBC) {
        maior = dAB;
    } else if (dAC >= dAB && dAC >= dBC) {
        maior = dAC;
    } else {
        maior = dBC;
    }

    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    float x1, y1, x2, y2, x3, y3;

    wcout << L"Coordenadas (x, y) do 1º ponto: ";
    cin >> x1 >> y1;
    wcout << L"Coordenadas (x, y) do 2º ponto: ";
    cin >> x2 >> y2;
    wcout << L"Coordenadas (x, y) do 3º ponto: ";
    cin >> x3 >> y3;

    wcout << L"\nMaior distância entre os pontos: " << maior_distancia(x1, y1, x2, y2, x3, y3);

    return 0;
}