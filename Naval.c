#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int map[15][15], mostrar[15][15], erro[15][15];
int tiro();
int contra();
int encora();
int porta();

int main() {

  int l, c, x, y, pont, iniciar;
  srand(time(NULL));

  printf("\n\t\t\t\t\tB A T A L H A  N A V A L \t");
  printf("\n\n");
  printf("\t\t\t\t\t\t Iniciar Jogo\n\n");
  printf("\t\t\t\t\t Digite 5 para Iniciar: ");
  scanf("%i", &iniciar);
  do{
  for(int x=0;x<15;x++){
  for(int y=0;y<15;y++){
    map[x][y]=0;
    erro[x][y]=0;
  }
}

  contra();
  encora();
  porta();

printf("\n\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\n");
   for (l = 0; l < 15; l++) {
     printf("%i\t", l);
     for (c = 0; c < 15; c++) {
      printf("%i\t", erro[l][c]);
    }
    printf("\n");
 }

pont=tiro();
    printf("\n");
    printf("\t\t\t\t\t\t\t F I M \n");
    printf("\t\t\t\t\t\t\t  D E \n");
    printf("\t\t\t\t\t\t\tJ O G O \n");
    printf("\n");
 printf("\n\n\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\n");
   for (l = 0; l < 15; l++) {
     printf("%i\t", l);
     for (c = 0; c < 15; c++) {
      printf("%i\t", map[l][c]);
    }
    printf("\n");
 }

printf("\nP O N T U A Ç Ã O :\t\t %i", pont);
    
   printf("\nPara jogar de novo digite 5 ou outro número para sair\n ");
scanf("%i", iniciar);

}while(iniciar=5);
    
  printf("\n\t\t\t\t\t\t*** Créditos ***\n");
    printf("\t\t\t\t\tEMANUEL RICARDO FERNANDES\n");
    printf("\t\t\t\t\tFELIPE ARAUJO PEREIRA\n");
    printf("\t\t\t\t\tLEONARDO GONÇALVES FREITAS\n");
    printf("\n\t\t\t\t\t   OBRIGADO POR JOGAR :)");
  return 0;

}

int contra(){
    int x,y,ax;
    srand(time(NULL));
    x=rand()%15;
    y=rand()%15;
    if(y==14){
        for(int i=0;i<2;i++){
            ax=y-i;
            while (map[x][ax]!=0)
        {
         x=rand()%15;
         if(y>12){
         ax=y-i;
         }else{
          ax=y+i;
         }
        }
            map[x][ax]=7;
            }
    }
    else{
    for (int s=0;s<2;s++){
        ax=y+s;
        while (map[x][ax]!=0)
        {
         x=rand()%15;
         if(y>12){
         ax=y-s;
         }else{
          ax=y+s;
         }
        }
        map[x][ax]=7;
    }
    }
    return 0;
}

int encora(){
  int ax,x,y,n;
  srand(time(NULL));
  for(n=0;n<2;n++){
  x=rand()%15;
  y=rand()%15;
  if(y>12){
    for(int i=0;i<3;i++){
        ax=y-i;
        while (map[x][ax]!=0)
        {
         x=rand()%15;
         if(y>12){
         ax=y-i;
         }else{
          ax=y+i;
         }
        }
        map[x][ax]=8;
    }
  }
  else{
    for(int s=0;s<3;s++){
        ax=y+s;
        while (map[x][ax]!=0)
        {
         x=rand()%15;
         if(y>12){
         ax=y-s;
         }else{
          ax=y+s;
         }
        }
        map[x][ax]=8;
    }
  }
  }
  return 0;
}

int porta(){
  int x,y,ax;
  srand(time(NULL));
  x=rand()%15;
  y=rand()%15;
  if(y>10){
    for(int i=0;i<5;i++){
      ax=y-i;
      while (map[x][ax]!=0)
        {
         x=rand()%15;
         if(y>12){
         ax=y-i;
         }else{
          ax=y+i;
         }
        }
      map[x][ax]=9;
    }
  }
  else{
  for(int s=0;s<5;s++){
    ax=y+s;
    while (map[x][ax]!=0)
        {
         x=rand()%15;
         if(y>12){
         ax=y-s;
         }else{
          ax=y+s;
         }
        }
    map[x][ax]=9;
  }
  }
  return 0;
}

int tiro(){

int tiro, ct, lt, l, c, chance, pont;
  
chance=5;
tiro=5;
pont=0;
while (tiro>0){
 
printf("\n\tDigite a Coluna:");
 scanf("%i", & ct);
 printf("\tDigite a Linha:");
 scanf("%i", & lt);
 printf("\n");
 chance--;
 if(map[lt][ct]==7){
   map[lt][ct]=1;
   erro[lt][ct]=1;
   pont=pont+30;
   printf("\tTiro Certeiro, você derrubou um Contra-Torpedeiro\nRestam %i tentativas\n\n", chance);
   printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\n");
   for (l = 0; l < 15; l++) {
     printf("%i\t", l);
     for (c = 0; c < 15; c++) {
      printf("%i\t", erro[l][c]);
    }
    printf("\n");
  }
  
 }

if(map[lt][ct]==8){
   map[lt][ct]=1;
   erro[lt][ct]=1;
   pont=pont+25;
   printf("\tTiro Certeiro, você derrubou um Encouraçado\nRestam %i tentativas\n\n", chance);
   printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\n");
   for (l = 0; l < 15; l++) {
     printf("%i\t", l);
     for (c = 0; c < 15; c++) {
      printf("%i\t", erro[l][c]);
    }
    printf("\n");
  }
   
 }

if(map[lt][ct]==9){
   map[lt][ct]=1;
   erro[lt][ct]=1;
   pont=pont+20;
   printf("\tTiro Certeiro, você derrubou um Porta-Aviões\nRestam %i tentativas\n\n", chance);
   printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\n");
   for (l = 0; l < 15; l++) {
     printf("%i\t", l);
     for (c = 0; c < 15; c++) {
      printf("%i\t", erro[l][c]);
    }
    printf("\n");
  }
   
 }
 
if(map[lt][ct]==0 && chance>0){
   printf("\tVocê errou, acerte sua mira e tente novamente\nRestam %i tentativas\n\n", chance);
   erro[lt][ct]=1;
   map[lt][ct]=1;
   printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\n");
   for (l = 0; l < 15; l++) {
     printf("%i\t", l);
     for (c = 0; c < 15; c++) {
      printf("%i\t", erro[l][c]);
    }
    printf("\n");
  }
   
 }

if(map[lt][ct]==0 && chance==0){
   printf("\tVocê errou e essa foi sua ultima tentativa, mais sorte na proxima!!\n", chance);
   erro[lt][ct]=1;
   map[lt][ct]=1;
   printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13\t14\n");
   for (l = 0; l < 15; l++) {
     printf("%i\t", l);
     for (c = 0; c < 15; c++) {
      printf("%i\t", erro[l][c]);
    }
    printf("\n");
  }
   
 }
tiro--;
}

return pont;  
}

