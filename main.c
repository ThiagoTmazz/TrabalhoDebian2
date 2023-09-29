#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Função 1: Multiplicar cada elemento do vetor por 2
double* funcao1(double vetor[], int tamanho) {
    double* resultado = malloc(tamanho * sizeof(double));
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor[i] * 2.0;
    }
    return resultado;
}

// Função 2: Calcular o quadrado de cada elemento do vetor
double* funcao2(double vetor[], int tamanho) {
    double* resultado = malloc(tamanho * sizeof(double));
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = pow(vetor[i], 2.0);
    }
    return resultado;
}

// Função 3: Calcular a raiz quadrada de cada elemento do vetor
double* funcao3(double vetor[], int tamanho) {
    double* resultado = malloc(tamanho * sizeof(double));
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = sqrt(vetor[i]);
    }
    return resultado;
}

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
