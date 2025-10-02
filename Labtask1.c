#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Natural numbers from %d to 1 in reverse order:\n", n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}























}


