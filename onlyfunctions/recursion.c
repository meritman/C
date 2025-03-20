#include <stdio.h>
int sum(int arr[],int n){//{5,6,7,3,2,1,9}
    if (n<0){
        return 1;
    }
    else{
        return arr[n - 1] + sum(arr, n - 1);
    }}

int main(){
    int arr[50],n;
    printf("\nEnter the number of array elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements now : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        printf("\t\t\t");
    }
    printf("%d",sum(arr,n));
    return 0;
    
}