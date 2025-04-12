#include <stdio.h>
int sum(int arr[20],int n){
int sm=0;
for (int i = 0; i < n; i++)
{
    return sm=sum(arr[i],n)+sum(arr[i+1],n);
}

}
int main(){
    int n=6;
    int arr[20]={23,3,32,2,2,4,3,3,3,67};
    sum(arr,n);
    return 0;
}