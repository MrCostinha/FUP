#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float tamanho_arquivo, velocidade_download, tempo_download;

    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tamanho_arquivo);
    printf("Velocidade da internet (Mb/s): ");
    scanf("%f", &velocidade_download);

    tempo_download = tamanho_arquivo / (velocidade_download/8);
    
    wprintf(L"\nTempo estimado para download: %.2f minutos", tempo_download/60);
    
    return 0;
}