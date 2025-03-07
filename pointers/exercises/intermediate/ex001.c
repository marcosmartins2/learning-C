#include <stdio.h>

int swap(int *a,int *b);


int main(){
    int *a;
    int *b;

    swap(a,b);

}




int swap(int *a, int *b ){

    int x = 5;
    int y = 10;
    int temp;

    a = &x;
    b = &y;

    printf("o valor de x é %d\ne o valor de y é %d\n",*a,*b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("o valor de x é %d\ne o valor de y é %d\n",*a,*b);

}