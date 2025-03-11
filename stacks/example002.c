#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int dado;
    struct lista *prox;
} celula;

void imprimir();
void push(int);
void pop();


celula *topo = NULL;



int main(){

    int n, opcao;



    do {
        printf("\n\nStack Menu\n1. Empilhar\n2. Desempilhar\n3. Imprimir\n0. Exit");
        printf("\n Escolha uma opção 0-3? :\n");
        scanf("%d",&opcao);
        switch(opcao){
            case 1: 
            printf("Entre com um valor para ser empilhado:");
            scanf("%d",&n);
            push(n);
            break;

            case 2:
            pop();
            break;

            case 3: 
            imprimir();
            break;

        }
    }while(opcao!=0);


    return 0;
}

void push(int item){

    printf("\nEMPILHANDO");
    celula *novo = malloc(sizeof(celula));

    novo->dado = item;
    novo->prox = topo;
    topo = novo;

    printf("\n Valor adicionado %d",novo->dado);


}


void pop(){

    

    if (topo == NULL){
        printf("\nA pilha está vazia");
        
    } else {
        printf("\n DESEMPILHANDO");

        celula *temp;
        temp = topo;
        topo = topo->prox;

        printf("\n\n %d DESEMPILHADO ",temp->dado);
        free(temp);



    }

}


void imprimir(){

}