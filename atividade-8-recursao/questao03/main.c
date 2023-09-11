#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;

    printf("Digite um valor inteiro para calcular o termo de Fibonacci: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("O %d-esimo termo da sequencia de Fibonacci e %d\n", n, resultado);

    return 0;
}
