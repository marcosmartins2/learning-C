#include <stdio.h>

typedef struct {
    int dia,mes,ano;

}Data;

typedef struct {
    char nome[50];
    Data data;
} Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;


Pessoa ler_pessoa(){
    Pessoa p;

    printf("\nDigite nome e data de nascimento dd mm aaaa: \n");
    scanf("%49[^\n]%d%d%d",p.nome,p.data.dia,p.data.mes,p.data.ano);
    return p;

}
 void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n",p.nome,p.data.dia,p.data.mes,p.data.ano);
 }

 //Função para a operação push(empilhar)

*** empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        novo-> proximo = 
        
    } else{
        printf("Erro ao alocar memoria");
        return 1;
    }
}






int main(){

    No *topo = NULL;


    return 0;
}