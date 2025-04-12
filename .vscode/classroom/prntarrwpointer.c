#include <stdio.h> 
int main(){
    int arr[10],n;
    printf("Enter the No of elements in the array:");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //displaying the array elements with ointers
    int *p;
    printf("[");
    for (int i=0; i<n; i++){
        p=&arr[i];
        printf("%d   ",*p);
    }
    printf("]");
    return 0;
}