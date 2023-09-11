#include <stdio.h>
#include <stdlib.h>

int somatorio(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somatorio(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int resultado = somatorio(n);

    printf("O somatorio de 1 ate %d e igual a %d\n", n, resultado);

    return 0;
}
