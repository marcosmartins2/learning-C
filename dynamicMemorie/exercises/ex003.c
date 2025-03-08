#include <stdio.h>
#include <stdlib.h>



int main(){

    int *arr;

    arr = malloc(sizeof(int)*5);

    if (arr =NULL){
        printf("memoria nao alocada");
        return 1;
    }

    printf("Digite 5 numeros para adicionar ao array:\n");

    for(int i = 0;i<5;i++){
        scanf("%d",arr+i);
    }

    arr = realloc(arr,sizeof(int)*10);

    printf("Digite os 5 novos numeros do array: \n");

    for(int i = 5;i<10;i++){
        scanf("%d",arr+i);
    }

    printf("o array completo é:\n");
    for(int i = 0;i<10;i++){
        printf("%d \n",*(arr+i));
    }


    free(arr);

    return 0;

}