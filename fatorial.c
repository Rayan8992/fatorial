#include "fatorial.h"

unsigned long long fatorial(int n) {
    if (n < 0) return 0; // Entrada inválida
    if (n == 0) return 1ULL;

    unsigned long long resultado = 1ULL;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}
