#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float n1, n2, n3, n4, media;

    printf("1ª nota: ");
    scanf("%f", &n1);
    printf("2ª nota: ");
    scanf("%f", &n2);
    printf("3ª nota: ");
    scanf("%f", &n3);
    printf("4ª nota: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    wprintf(L"\nMédia das notas: %.2f", media);
    return 0;
}