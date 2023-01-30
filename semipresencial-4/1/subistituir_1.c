
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo_in, *arquivo_out;
    char linha[1000], nova_linha[1000];
    int i;
   
    arquivo_in = fopen("arquivo_in.txt", "r");
    arquivo_out = fopen("arquivo_out.txt", "w");
   
    while(fgets(linha, 1000, arquivo_in) != NULL)
    {
        for(i=0; i<strlen(linha); i++)
        {
            if(linha[i]=='a' || linha[i]=='e' || linha[i]=='i' ||
               linha[i]=='o' || linha[i]=='u')
            {
                nova_linha[i] = '*';
            }
            else
            {
                nova_linha[i] = linha[i];
            }
        }
       
        fprintf(arquivo_out, "%s", nova_linha);
    }
   
    fclose(arquivo_in);
    fclose(arquivo_out);
   
    return 0;
}