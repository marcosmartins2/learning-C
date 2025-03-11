#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int elemento;
    struct no *proximo;
}No;

void push(int);
void pop();
void imprimir();

No *topo = NULL;

int main(){

    int n,elemento;

    do{
        printf("Escolha uma opção (1-3)\n\n 1. EMPILHAR\n\n 2. DESEMPILHAR\n\n 3. IMPRIMIR \n\n 0. EXIT");
        scanf("%d",&n);


        switch(n){
            case 1:
                printf("\n\n Digite o elemento a ser adicionado");
                scanf("%d",&elemento);
                push(elemento);
                break;

            case 2:
                pop();
                break;
            case 3:
            imprimir();
            break;

        }
    }while(n!= 0);



    return 0;
}



void push(int elemento){

    No *novo = malloc(sizeof(No));
    novo->elemento = elemento;
    novo->proximo = topo;
    topo = novo;

    printf("\n\nElemento %d adicionado com sucesso!",novo->elemento);
}
void pop(){

    if (topo == NULL) {
        printf("\nA pilha está vazia! Nada para desempilhar.");
        return;
    }
    
    No *temp;
    temp = topo;
    topo = topo->proximo;

    printf("\n\n Desempilhando %d com sucesso",temp->elemento);
    free(temp);


}


void imprimir(){
    printf("Imprimir");
}