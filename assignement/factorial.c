#include <stdio.h>

void main() {
    int num, i;
    int fact = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Factorial not possible for negative numbers\n");
        return;
    }
    
    for(i = 1; i <= num; i++) {
        fact = fact * i;
    }
    
    printf("Factorial of %d = %ld", num, fact);
}