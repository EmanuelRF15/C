#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int ap1[6],ap2[6],x[6],v, iguais;

    printf("insira numeros da aposta 1:\n");
    for(v=0;v<6;v++){
        scanf("%i", &ap1[v]);
        if(ap1[v]>60){
            printf("numero infalido!!");
        }
    }
    printf("insira numeros da aposta 2:\n");
    for(v=0;v<6;v++){
        scanf("%i", &ap2[v]);
        if(ap2[v]>60){
            printf("numero infalido!!");
        }
    }
    srand(time(NULL));
    
    for(v=0;v<6;v++){
        x[v] = rand()%60;
        printf("%d", x[v]);
    }

    for (v = 0; v < 6; v++)
    {
        if (ap1[v]==x[v])
        {
           iguais++;
        }
    }
    if (iguais==6)
    {
        printf("Ganhador!!");
    }
    else{
        printf("numero de acertos=%i", iguais);
    }
    for (v = 0; v < 6; v++)
    {
        if (ap2[v]==x[v])
        {
           iguais++;
        }
    }
    if (iguais==6)
    {
        printf("Ganhador!!");
    }
    else{
        printf("numero de acertos=%i", iguais);
    }
    
}