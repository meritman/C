

#include <stdio.h>
void main() {
    int n, a = 0, b = 1, next;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series: %d %d", a, b);
    for (int i = 2; i < n; i++) {
        next = a + b;
        a = b;
        b = next;
        printf(" %d", next);
    }
    printf("\n");
}

