#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci series up to 1 term:\n");
        printf("%d\n", first);
    } else {
        printf("Fibonacci series:\n");
        printf("%d %d ", first, second);

        for (i = 2; i < n; i++) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
