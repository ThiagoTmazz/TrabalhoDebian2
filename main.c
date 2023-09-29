#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "funcao1.h"
#include "funcao2.h"
#include "funcao3.h"

int main() {
    int tamanhovetor;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanhovetor);

    double vetor[tamanhovetor];

    // Gerar números aleatórios
    srand(time(NULL));

    // Preencher o vetor com valores aleatórios entre 0 e 1
    for (int i = 0; i < tamanhovetor; i++) {
        vetor[i] = (double)rand() / RAND_MAX;
    }

    //Resultado
    double* resultado1 = funcao1(vetor, tamanhovetor);
    printf("Resultado da Função 1:\n");
    for (int i = 0; i < tamanhovetor; i++) {
        printf("%lf ", resultado1[i]);
    }
    printf("\n");
    free(resultado1);

    double* resultado2 = funcao2(vetor, tamanhovetor);
    printf("Resultado da Função 2:\n");
    for (int i = 0; i < tamanhovetor; i++) {
        printf("%lf ", resultado2[i]);
    }
    printf("\n");
    free(resultado2);

    double* resultado3 = funcao3(vetor, tamanhovetor);
    printf("Resultado da Função 3:\n");
    for (int i = 0; i < tamanhovetor; i++) {
        printf("%lf ", resultado3[i]);
    }
    printf("\n");
    free(resultado3);

    return 0;
}
