#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char nome[50], maior_nome[50];
    int nota, maior_nota = 0;

    fp = fopen("arquivo.txt", "r"); //Abrindo o arquivo

    //Verificando se o arquivo foi aberto
    if(fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    //Lendo as informações do arquivo
    while(fscanf(fp, "NOME:%s NOTA:%d\n", nome, &nota) != EOF) {
        //Verificando se a nota é maior que a nota armazenada na variável maior_nota
        if(nota > maior_nota) {
            maior_nota = nota; //Atualizando a maior nota
            strcpy(maior_nome,nome); //Atualizando o nome do aluno
        }
    }

    printf("O aluno %s possui a maior nota com %d pontos.\n", maior_nome, maior_nota);

    fclose(fp); //Fechando o arquivo

    return 0;
}