#include <stdio.h>
void array(int arr[],int n){
    printf("[");
    for(int i=0; i<n; i++){
        printf(" %d  ",arr[i]);
    }
    printf("]");
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
    array(arr,n);
    return 0;
}



