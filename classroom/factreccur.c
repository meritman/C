#include <stdio.h>
int fact(int num){
    if (num < 0)
    {
        printf("Factorial not possible for negative numbers\n");
        return 1; 
    }
    else if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = fact(num);
    printf("Factorial of %d = %d", num,result);
}