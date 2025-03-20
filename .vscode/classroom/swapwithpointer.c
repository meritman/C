#include <stdio.h>
int main(){
    int a,b,*aa,*bb,*temp;
    printf("Enter the Number for A\n");
    scanf("%d",&a);
    printf("Enter the Number for B\n");//c=a a=b b=c
    scanf("%d",&b);
    *temp=a;
    aa=&b;
    bb=temp;
    printf("Given A=%d and B=%d\n",*bb,*aa);
    printf("Swapped values A=%d and B=%d\n",*aa,*bb);
    return 0;
}