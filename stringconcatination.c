#include <stdio.h>
#define null '\0'
int main(){
    char str1[20],str2[20],*p,*q,*r;
    int count1=0,count2=0;
    printf("Enter the first Word:");
    scanf("%s",str1);
    printf("Enter the second word:");
    scanf("%s",str2);
    p=str1;
    q=str2;
    while(*p!=null){
        count1++;
        p++;
    }
    while(*q!=null){
        count2++;
        q++;
    }
    int rcount=count1+count2;
    int tempcount=0;
    while(rcount>=count1){

        r=&str1[count1];
        str2[tempcount]=*r;
        count1--;
        tempcount++;
    }
    printf("%s",str1);
return 0;
}