#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int segundos;
    double horas;

    printf("Tempo em segundos: ");
    scanf("%d", &segundos);

    horas = 1.0*segundos / 3600;

    printf("Tempo em horas: %lf", horas);

    return 0;
}