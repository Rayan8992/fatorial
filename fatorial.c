#include "fatorial.h"

unsigned long long fatorial(int n) {
    if (n < 0) {
        return 0;
    }

    if (n == 0) {
        return 1;
    }

    unsigned long long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}
