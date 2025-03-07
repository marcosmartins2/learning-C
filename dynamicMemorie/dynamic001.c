#include <stdio.h>
#include <stdlib.h>


int main(){

    char *ptr;


    ptr = calloc(4,sizeof(char));

    if (ptr){
        printf("Memoria alocada com sucesso\n");
        printf("o valor de ptr antes é %c\n",*ptr);
        *ptr = 'joao';
        printf("o valor de ptr é %c\n",*ptr);
    }
    else {
        printf("alocação nao bem sucedida");
    }


    


}

// malloc serve para alocar memoria, seu parametro é a quantidade de memoria que deve ser alocada
// calloc tambem serve para alocar memoria, mas recebe dois parametros, o primeiro a quantidade de itens que a memoria vai ser alocada e o segundo a quantidade de memoria necessária
// realloc serve para liberar mais espaço no vetor de acordo com a necessidade.Recebe dois parametros ( o proprio vetor e o novo tamanho)
// free serve para liberar a memoria, recebendo o parametro como ponteiro