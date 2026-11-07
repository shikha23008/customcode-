#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int k = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        int r = (i <= k) ? i : n - i + 1;   // wing size on this row
        int gap = 2 * (k - r) + 3;          // spaces between the wings

        for (int j = 0; j < r; j++)
            printf("*");
        for (int j = 0; j < gap; j++)
            printf(" ");
        for (int j = 0; j < r; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}