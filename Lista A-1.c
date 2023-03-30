#include <stdio.h>

int main() {
    double B, KB, MB;
    double GB;

    printf("Quantidade em Megabytes (MB): ");
    scanf("%lf", &MB);

    B = MB*(1024*1024);
    KB = MB*1024;
    GB = MB/1024;

    printf("Quantidade em Bytes (B): %.0lf", B);
    printf("\nQuantidade em Kilobytes (KB): %.0lf", KB);
    printf("\nQuantidade em Gigabytes (GB): %lf", GB);

    return 0;
}