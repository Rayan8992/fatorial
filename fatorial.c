#include <stdio.h>

// Função que calcula o fatorial de um número inteiro
int fatorial(int n) {
    if (n < 0) {
        return -1; // Retorna -1 para indicar erro (número negativo)
    }

    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
