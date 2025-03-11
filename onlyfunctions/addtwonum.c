#include <stdio.h>
int fun(int a,int b){
    return a+b;
}
void main(){
    int a,b;
    a=20;
    b=10;
    printf("%d",fun(a,b));
}