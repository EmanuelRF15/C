#include <stdio.h>
#include <string.h>

int main(void){
    int op;

    do{
    printf("\t\tMenu\n1. Criar Matriz\n2. Preenhcer Matriz\n3. Somar Matriz\n4. Vetor de uma linha\n5.Sair\n");
    scanf("%d", &op);
    switch (op){
        case 1:
        criarMatriz();
        break;
        case 2:
        lerMatriz();
        break;
        case 3:
        somarMatriz();
        break;
        case 4:
        vetorMatriz();
        break;
        case 5:
        break;
        default:
        printf("\nError");
        }

    }while(op!=5);
}

int criarMatriz(){
    return 0;
}

int lerMatriz(){
    return 0;
}

int somarMatriz(){
    return 0;
}

int vetorMatriz(){
    return 0;
}