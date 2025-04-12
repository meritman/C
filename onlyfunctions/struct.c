#include <stdio.h>
struct student{
    int age;
    char name[20];
    float mark;
    };
int main(){
    int n;
    printf("Enter the no of students to be added \n");
    scanf("%d",&n);
    struct student s[n];
        
for (int k=0; k<n; k++){
    int temp=k+1;
    printf("\nEnter the age of the %d student: ",temp);
    scanf("%d",&s[k].age);
    printf("\nEnter the name of the %d student: \n",temp);
    scanf("%s",s[k].name);
    printf("\nEnter the mark of the %d student: \n",temp);
    scanf("%f",&s[k].mark);
}
for (int j = 0; j < n; j++)
{
    printf("AGE:%d\t",s[j].age);
    printf("NAME:%s\t",s[j].name);
    printf("MARK:%f",s[j].mark);
    printf("\n");
}}
