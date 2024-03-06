#include <stdio.h>

// Imprimir o n-ésimo valor da série de fibonacci

int main() {
    int n;

    scanf("%d", &n);

    if (n < 1) {
        fprintf(stderr, "Por favor, insira um número inteiro maior ou igual a %d.\n", 1);
        return 1;
    }

    int arr[n];

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i < n + 1; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("%d\n", arr[n - 1]);

    return 0;
}
