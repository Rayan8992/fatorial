#include <assert.h>
#include <stdio.h>
#include "fatorial.h"

int main() {
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(2) == 2);
    assert(fatorial(3) == 6);
    assert(fatorial(5) == 120);

    assert(fatorial(-1) == 0);

    printf("Todos os testes passaram!\n");
    return 0;
}
