#include <stdio.h>
int fib(int num){
    int result=0;
    if (num==0){
        return 0;
    }
    else if (num==1){
        return 1;
    }
    else{
        return fib(num-1)+fib(num-2);
    }
}
int main(){
    int num;
    printf("Enter the range of the fibonaci sequesnce:\n");
    scanf("%d",&num);
    printf("fibonaci sequesnce:");
    for(int i=0;i<num;i++){
        printf("%d  ",fib(i));
    }
    return 0;
}