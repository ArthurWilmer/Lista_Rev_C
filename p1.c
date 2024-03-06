#include <stdio.h>

// Imprimir todos os números pares 0 < i < n

int main() {
    int i = 0, n;

    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
