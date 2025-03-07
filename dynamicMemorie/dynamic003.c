#include <stdio.h>
#include <stdlib.h>
 


int main(){

    int **mat,i,j;

    mat = malloc(4*sizeof(int*));

    for (i=0;i<4;i++){
        mat[i]= malloc(3*sizeof(int));
        
    }



    return 0;

}