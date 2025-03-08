#include <stdio.h>



int main(){


    char *nome;

    int tamanho;



    printf("Digite o tamanho do nome:\n");
    scanf("%d",&tamanho);

    nome = malloc((sizeof(char)*tamanho)+1);

    if (nome == NULL ){
        printf("Memoria nao alocada");
        return 1;
    }


    printf("Digite o nome:\n");
    scanf("%s",nome);


    printf("%s",nome);

    free(nome);


    return 0;
}