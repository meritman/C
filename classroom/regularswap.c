#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,temp;
    printf("Enter the Number for A\n");
    scanf("%d",&a);
    printf("Enter the Number for B\n");//c=a a=b b=c
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Given A=%d and B=%d\n",b,a);
    printf("Swapped values A=%d and B=%d\n",a,b);
    system("spotify");
    return 0;

}