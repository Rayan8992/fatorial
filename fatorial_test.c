#include <stdio.h>
#include "fatorial.c" // Importa a função

int main() {
    printf("Testes da função fatorial:\n");

    // Teste 1: fatorial de 0 deve ser 1
    printf("fatorial(0) = %d (esperado: 1)\n", fatorial(0));

    // Teste 2: fatorial de 5 deve ser 120
    printf("fatorial(5) = %d (esperado: 120)\n", fatorial(5));

    // Teste 3: número negativo deve retornar -1
    printf("fatorial(-3) = %d (esperado: -1)\n", fatorial(-3));

    return 0;
}
