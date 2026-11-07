#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int counter = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1)
                printf(" ");
            printf("%d", counter);
            counter++;
        }
        printf("\n");
    }

    return 0;
}