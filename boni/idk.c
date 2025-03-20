#include <stdio.h>
#include <conio.h>
int fact(int);
int main()
{
int n,ans;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
ans=fact(n);
printf("The ans =%d",ans);
getch();
}
int fact(int x)
{
if (x==1){
return 1;
}
else{
    return (x*fact(x-1));}
}