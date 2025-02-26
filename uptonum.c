#include <stdio.h>
void main(){
    int a,x;
    printf("Enter the number to be counted upto");
    scanf("%d",&a);
    for (x=0; x<=a; x++){
        a++;
        printf("%d",a);
        printf("%d\n",x);
    }
}