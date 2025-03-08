#include <stdio.h>
#include <stdlib.h>


int main(){


    int qtdNumeros;
    int *arr;
    int soma = 0;
   
    printf("Digite quantos numeros deseja somar:\n");
    scanf("%d",&qtdNumeros);


    arr = calloc(qtdNumeros,sizeof(int));

    if (arr= NULL){
        printf("Alocação mal sucedida\n");
        return 1;
    }


    printf("Digite os numeros que deseja:\n");
    
    for (int i = 0;i<qtdNumeros;i++){
        scanf("%d",arr+i);
    }


    for (int i = 0;i<qtdNumeros;i++){
        soma += *(arr+i);
    }


    printf("A soma dos numeros digitados é: %d\n",soma);

    free(arr);



    return 0;


}