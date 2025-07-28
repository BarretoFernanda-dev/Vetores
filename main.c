

//1. Um algoritmo que gere aleatoriamente um vetor de 20 elementos inteiros.
//E conte quantos valores pares existem no vetor.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>//necessario para funcao time()

int main(){

    int vetor[20];
    int cont, pares = 0, impares = 0;

    srand(time(NULL));

    for(cont = 0; cont < 20; cont++){
        vetor[cont] = rand() % 100;
        printf("\n Posicao %d :%d ", cont, vetor[cont]);
    
        if(vetor[cont] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }

    printf("\nNumero de Pares: %d\n Numero de Impares: %d \n", pares, impares);

    return 0;
}