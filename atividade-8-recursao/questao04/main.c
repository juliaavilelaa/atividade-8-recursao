#include <stdio.h>
#include <stdlib.h>

int ordemCresc(int n) {
    if (n >= 0) {
        ordemCresc(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numeros naturais de 0 ate %d em ordem crescente:\n", n);
    ordemCresc(n);

    return 0;

}
