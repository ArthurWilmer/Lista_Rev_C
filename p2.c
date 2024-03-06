#include <stdio.h>

int odd(int n);

int x = 0;

int main() {
    int n;

    scanf("%d", &n);

    odd(n);

    return 0;
}

int odd(int n) {
    if (n >= x) {
        printf("%d\n", x);
        x = x + 2;
    }

    return odd(n);
}
