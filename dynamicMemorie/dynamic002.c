#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int i,tam,*vet;

    printf("Digite o tamanho do vetor\n");
    scanf("%d",&tam);
    vet = malloc(sizeof(int)*tam);
    srand(time(NULL));
    if(vet){
        for (i=0;i<tam;i++){
            *(vet +i) = rand()%100;
        }
        for (i=0;i<tam;i++){
            printf("%d ", *(vet + i));
        }
        printf("Digite o novo tamanho do vetor\n");
        scanf("%d",&tam);

        vet = realloc(vet,tam);

        printf("\nvetor realocado\n");
        for (i=0;i<tam;i++){
            printf("%d ", *(vet + i));
        }


    } else {
        printf("erro ao alocar memoria!");
    }



    return 0;
}