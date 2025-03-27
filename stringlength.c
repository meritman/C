#include <stdio.h>
#define null '\0'
int main(){
    char str1[20],*p;
    int count=0;
    printf("Enter the Word:");
    scanf("%s",str1);
    p=str1;
    while(*p!=null){
        count++;
        p++;
    }
printf("The Length of %s is %d",str1,count);
return 0;
}