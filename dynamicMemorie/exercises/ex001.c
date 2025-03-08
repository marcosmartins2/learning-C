#include <stdio.h>
#include <stdlib.h>

// ler o tamanho de um vetor, alocar a memoria correta para sua utilização, ler os elementos digitados pelo usuario e printalos no final
int main(){

    int tamanho;
    int *arr;

    printf("Digite o tamanho do seu array:\n");
    scanf("%d",&tamanho);


    arr = malloc(sizeof(int)*tamanho);
    
    
    for (int i =0;i<tamanho;i++){
        scanf("%d",arr+i);
    }

    printf("\n\n");

    for (int i =0;i<tamanho;i++){
        printf("%d\n",*(arr+i));
    }

    free(arr);









    return 0;
}