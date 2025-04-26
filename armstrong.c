#include <stdio.h>
#include <math.h>
int main(){
    int num,count,r=0,rem,temp;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    int compare=num;
    temp=num;
    while (temp!=0){
        temp=temp/10;
        count++;
    }
    while (num!=0){
        rem=num%10;
        r=r+pow(rem,3);
        num=num/10;
    }
    printf("%d",r);//for checking the value of r
if (compare==r){
printf("The given number is an armstrong\n");
}
else{
    printf("The given number is not a armstrong");
}
return 0;
}