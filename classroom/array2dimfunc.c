#include <stdio.h>
void array_opp(int arr[][20],int row,int col){
    for (int i = 0; i < row; i++)
    {   printf("[");
        for (int j=0; j<col; j++){
            printf("%d   ",arr[i][j]);
        }
        printf("]");
        printf("\n");
    }   
}
int main(){
    int arr[20][20],row,col;
    printf("Enter the Size of the Array:\n");
    scanf("%d %d",&row,&col);
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j<col; j++){
            printf("\nEnter the [%d][%d] element:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
     array_opp(arr,row,col);
    return 0;

}