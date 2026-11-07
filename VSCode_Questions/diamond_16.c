#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half: rows 1 to n
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower half: rows n-1 down to 1
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}