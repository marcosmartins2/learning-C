#include <stdio.h>


int main(){

    int x = 10;
    int *p;

   p = &x;

   printf("o valor de p apontado para x é %d\n", *p);

   *p = 15;


    printf("o endreco de x é %p\n",&x);
    printf("o valor de p apontado para x é %d\n", *p);
    printf("o endereco de memoria de p %p\n", p);


    return 0;

}