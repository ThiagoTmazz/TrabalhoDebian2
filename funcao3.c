// funcao3.c
#include <math.h>
#include <stdlib.h>
#include "funcoes.h"

double* funcao3(double vetor[], int tamanho) {
    double* resultado = malloc(tamanho * sizeof(double));
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = sqrt(vetor[i]);
    }
    return resultado;
}
