
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], binario[10][8], i, j;
    FILE *arq;

    // Recebendo os números do vetor
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    // Convertendo para binário
    for (i = 0; i < 10; i++){
        for (j = 0; j < 8; j++){
            binario[i][j] = vetor[i] % 2;
            vetor[i] /= 2;
        }
    }

    // Gravando os números binários no arquivo
    arq = fopen("arquivo.txt", "w");
    for (i = 0; i < 10; i++){
        for (j = 7; j >= 0; j--){
            fprintf(arq, "%d", binario[i][j]);
        }
        fprintf(arq, "\n");
    }
    fclose(arq);

    return 0;
}