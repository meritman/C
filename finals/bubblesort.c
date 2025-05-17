#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 21, 4, 456, 656, 8, 1};
    int temp;
for (int i = 0; i < 9+1; i++)
{
    for (int j = 0; j < 9-i-1; j++)
    {
       //swapping
       if (arr[j]>arr[j+1])
       {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
       
    }
    
}
for (int k = 0; k < 9; k++)
{
    printf("%d  ",arr[k]);
}

return 0;}