//2. Ler dois vetores de 10 posições e faça a multiplicação 
//dos elementos de mesmo índice, colocando o resiltado em
//um terceiro vetor. 

#include<stdio.h>
#include<stdlib.h>

int main(){

    int vet1[10], vet2[10], vet3[10];
    int cont;

    printf("Determine os valores do primeiro vetor: ");

    for(cont = 0; cont < 10; cont++){
        printf("\n %d Posicao: ", cont);
        scanf("%d", &vet1[cont]);
    }
   
    for(cont = 0; cont < 10; cont++){
    printf("  %d ", vet1[cont]);

}

printf("\n Determine os valores do segundo vetor: ");

for(cont = 0; cont < 10; cont++){
    printf("\n %d Posicao: ", cont);
    scanf("%d", &vet2[cont]);
}
for(cont = 0; cont < 10; cont++){
    printf(" %d ", vet2[cont]);
}

for(cont = 0; cont < 10; cont++){
        vet3[cont] = vet1[cont]*vet2[cont];
    }

printf("\n Resultado da Multiplicacao: ");

for(cont = 0; cont < 10; cont++){
    printf("\n %d X %d = %d\n", vet1[cont], vet2[cont], vet3[cont]);
}

    return 0;
}