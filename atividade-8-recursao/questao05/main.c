#include <stdio.h>
#include <stdlib.h>

int ordemDecresc(int n) {
    if (n >= 0) {
        printf("%d ", n);
        ordemDecresc(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numeros de 0 ate %d em ordem decrescente:\n", n);
    ordemDecresc(n);

    return 0;
}
