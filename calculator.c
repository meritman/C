#include <stdio.h>
void main(){
    int a,b,ans;
    char ch1;
    printf("Enter the First number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Now enter your ch1oice (+,-,*)");
    scanf(" %c",&ch1); // Added a space before %c to consume any leftover newline ch1aracter
    if (ch1=='+'){
        ans=a+b;
    }
    else if (ch1=='-')
    {
        ans=a-b;
    }
    else if (ch1=='*'){
        ans=a*b;
    }
    printf("your answer is %d",ans);
    


}