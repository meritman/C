#include <stdio.h>
int sum(int arr[],int n){
    int ans=0;
    for(int i = 0; i < n; i++) {
        ans += arr[i];
    }
    
    return ans;
}
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