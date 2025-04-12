#include <stdio.h>
int brr[10];
int even(int arr[10],int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
        brr[count]=arr[i];
        count++;}
    }
    return count;
}
void display(int result,int n){
    printf("No of Even numbers are: %d\n",result);
    for(int i=0; i<n; i++){
    if(brr[i]!=0){
        printf("%d   ",brr[i]);
    }

}
}
int main(){
    int arr[10],n;
    printf("enter the no of elements in the array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=even(arr,n);
    display(result,n);
}