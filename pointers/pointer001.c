#include <stdio.h>



int main(){

    int var = 15;
    int *ptr;

    ptr  = &var;

    printf("Conteudo de var = %d\n\n",var);
    printf("Endereço de var = %p\n",&var);
    printf("Conteudo apontado por ptr = %d\n",*ptr);
    printf("Endereco apontado por ptr = %p\n", ptr);


}

// Ponteiros:
// *ptr : o apontado por, conteudo do endereço da variavel que ptr aponta 
// ptr: o endereço da variável 
// &ptr : endereco do ponteiro(ptr)
