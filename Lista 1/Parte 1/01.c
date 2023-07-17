#include <stdio.h>

int main() {
    double B, KB, MB, GB;

    printf("Megabytes (MB): ");
    scanf("%lf", &MB);

    B = MB*(1024*1024);
    KB = MB*1024;
    GB = MB/1024;

    printf("Bytes (B): %.0lf", B);
    printf("Kilobytes (KB): %.0lf", KB);
    printf("Gigabytes (GB): %lf", GB);

    return 0;
}