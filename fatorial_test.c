#include <assert.h>
#include <stdio.h>
#include "fatorial.h"

int main(void) {
 
    assert(fatorial(0) == 1ULL);
    assert(fatorial(1) == 1ULL);
    assert(fatorial(2) == 2ULL);
    assert(fatorial(5) == 120ULL);
    assert(fatorial(10) == 3628800ULL);

    assert(fatorial(-1) == 0ULL);

    printf("Todos os testes passaram!\n");
    return 0;
}
