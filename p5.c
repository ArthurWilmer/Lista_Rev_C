#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    // Digite o n-ésimo valor da série de Fibonacci
    scanf("%d", &n);

    if (n < 0) {
        fprintf(stderr, "Insira n>1\n");
        return 1;
    }

    printf("O %d-ésimo número da série de Fibonacci é: %d\n", n, fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
