#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    int resultado = fatorial(n);

    printf("O fatorial de %d e igual a %d\n", n, resultado);

    return 0;
}
