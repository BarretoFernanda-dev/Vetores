//3.Leia um vetor de de 10 posicoes de inteiros e imprimir.
//Gerar 2 vetores a partir dele.
//Um com elemntos de posicoes impares do vetor e o outro
//elementos de posicoes pares. Imprimi-los no final.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int vetor[10];
    int pares[5], impares[5];
    int cont, cont_p = 0, cont_i = 0; //variaveis de controle para contadores


    printf("Determine os valores do vetor: \n");

    for(cont=0; cont<10; cont++){
        printf("\n %d Posicao: ", cont);
        scanf("%d", &vetor[cont]);
        
        if(cont % 2 == 0){
            pares[cont_p] = vetor[cont];
            cont_p++;

        } 
        else {
                impares[cont_i] = vetor[cont];
                cont_i++;
            }
            
            
        }

        printf(" Resultados: \n");
        
        printf("Vetor Principal:  ");
    for(cont=0; cont<10; cont++){
    
        printf(" %d \n", vetor[cont]);
    }
    printf("Pares na posicao: ");
    for(cont=0; cont<5; cont++){
        printf(" %d  ", pares[cont]);
    }
    printf("\nImpares na posicao: ");
    for(cont=0; cont<5; cont++){
        printf(" %d ", impares[cont]);
    }




    return 0;
}