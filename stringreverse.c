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
while (count>=0){
    printf("%c",str1[count]);
    count--;
}
return 0;
}