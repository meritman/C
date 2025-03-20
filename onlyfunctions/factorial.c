
    
#include <stdio.h>
int factorial(int n){
    if (n==0){
        return 1;
    }
    return n*factorial(n-1);
     }

int main(){
    printf("Factorial of what man?\n");
    int n;
    scanf("%d",&n);
    printf("your result is %d",factorial(n));
    return 0;
    }
