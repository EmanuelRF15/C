#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ficha {
    char nome[21];
    int idade;
    struct ficha *prox;
};

typedef struct ficha Ficha;

void incluir(Ficha **topo) {
    Ficha *novo = (Ficha *) malloc(sizeof(Ficha));
    if (novo == NULL) {
        printf("Erro: memória insuficiente\n");
        return;
    }
    printf("Digite o nome: ");
    scanf("%s", novo->nome);
    printf("Digite a idade: ");
    scanf("%d", &novo->idade);
    novo->prox = *topo;
    *topo = novo;
}

void excluir(Ficha **topo) {
    if (*topo == NULL) {
        printf("A pilha está vazia\n");
        return;
    }
    Ficha *aux = *topo;
    *topo = aux->prox;
    free(aux);
}

void mostrar(Ficha *topo) {
    if (topo == NULL) {
        printf("A pilha está vazia\n");
        return;
    }
    printf("Topo: %s, %d\n", topo->nome, topo->idade);
}

int main() {
    Ficha *topo = NULL;
    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Incluir\n");
        printf("2. Excluir topo\n");
        printf("3. Mostrar topo\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            incluir(&topo);
            break;
        case 2:
            excluir(&topo);
            break;
        case 3:
            mostrar(topo);
            break;
        case 4:
            break;
        default:
            printf("Opcao inválida\n");
        }
    } while (opcao != 4);
    return 0;
}