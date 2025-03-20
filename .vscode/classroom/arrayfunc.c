#include <stdio.h>
void array_opp(int arr[],int n){
    printf("[");
    for (int i=0; i<n; i++){
        printf("%d   ,",arr[i]);
    }
    printf("]\n");
}
int main(){
    int arr[20],n;
    printf("Enter the number of elements to be added?\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    array_opp(arr,n);
    return 0;

}