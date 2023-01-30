#include <stdio.h>
#include <stdlib.h>

int main(void){

  FILE *arquivo1, *arquivo2, *arquivo3;
  char nome_arquivo1[30], nome_arquivo2[30], c;

  printf("Digite o nome do primeiro arquivo: ");
  scanf("%[^\n]s", nome_arquivo1);
  printf("Digite o nome do segundo arquivo: ");
  scanf(" %[^\n]s", nome_arquivo2);


  arquivo1 = fopen(nome_arquivo1, "r");
  arquivo2 = fopen(nome_arquivo2, "r");
  arquivo3 = fopen("arquivo3.txt", "w");

  if (arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL) {
    printf("Erro na abertura dos arquivos\n");
    return 0;
  }

  while((c = fgetc(arquivo1)) != EOF){
    fputc(c, arquivo3);}
  while((c = fgetc(arquivo2)) != EOF){
    fputc(c, arquivo3);}

  printf("Arquivos juntos com sucesso!\n");

  fclose(arquivo1);
  fclose(arquivo2);
  fclose(arquivo3);

  return 0;
}