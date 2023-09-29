// funcao2.c
#include <math.h>
#include <stdlib.h>
#include "funcoes.h"

double* funcao2(double vetor[], int tamanho) {
    double* resultado = malloc(tamanho * sizeof(double));
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = pow(vetor[i], 2.0);
    }
    return resultado;
}

