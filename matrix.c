#include <stdio.h>
#include <string.h>
void main(){
    
    int mat1[10][10],size1,ch1=1;
    char conf1[10]="no";
    while(strcmp(conf1, "no")==0){//while conf1==yes
    while(ch1==1){ //if ch1==0 the LOOP WILL BREAK
    printf("Emter the size of the first matrix : ");
    scanf("%d",&size1);
    printf("Do you want to continue with a %dx%d matrix? or you want to edit it?\n",size1,size1);
    printf("Enter 0 to continue\n");
    printf("Enter 1 to Edit the matrix\n");
    scanf("%d",&ch1);
}
printf("Please Enter the values in the %dx%d matrix\n",size1,size1);
for(int i=1; i<=size1; i++){
    for(int j=1; j<=size1; j++){
        printf("Element[%d][%d] : ",i,j);
        scanf("%d",&mat1[i][j]);
    }}
printf("Please Confirm your matrix\n");
for(int k=1; k<=size1; k++){
    for(int l=1; l<=size1; l++){
        printf("%d     ", mat1[k][l]);
}
printf("\n");
}
printf("Enter -yes- to confirm the matrix\n");
printf("Enter -no- to enter a new matrix\n");

scanf("%s",conf1);
}

//matrix2
int mat2[10][10];
char conf2[10]="no";
while(strcmp(conf2, "no")==0){//while conf2==yes
printf("Please Enter the values for the second %dx%d matrix\n",size1,size1);
for(int i=1; i<=size1; i++){
    for(int j=1; j<=size1; j++){
        printf("Element[%d][%d] : ",i,j);
        scanf("%d",&mat2[i][j]);
    }}
printf("Please Confirm your matrix\n");
for(int k=1; k<=size1; k++){
    for(int l=1; l<=size1; l++){
        printf("%d     ", mat2[k][l]);
}
printf("\n");
}
printf("Enter -yes- to confirm the matrix\n");
printf("Enter -no- to enter a new matrix\n");

scanf("%s",conf2);
}

int output[10][10];
char oper,ch2[3]="yes";
while(strcmp(ch2, "yes")==0){
printf("Enter the operation:\n");
printf("+ to add\n");
printf("- to subtract\n");
printf("x to multiply\n");

scanf(" %c", &oper);

switch(oper){
    case '+':
        for (int i=1; i<= size1; i++){
            for (int j=1; j<=size1; j++){
                output[i][j]=mat1[i][j]+mat2[i][j];
                printf("%d\t",output[i][j]);
            }
            printf("\n");
        }
        break;
    case '-':
        for (int i=1; i<=size1; i++){
            for (int j=1; j<=size1; j++){
                output[i][j]=mat1[i][j]-mat2[i][j];
                printf("%d\t",output[i][j]);
            }
            printf("\n");
        }
        break;
    case 'x':
        for (int i=1; i<=size1; i++){
            for (int j=1; j<=size1; j++) {
                output[i][j]=0;
                for(int k=1; k<= size1; k++) {
                    output[i][j]+=mat1[i][k]*mat2[k][j];
                }
                printf("%d\t",output[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("%c isn't a valid operator!", oper);
}
printf("Do you want to try another operation?\n");
printf("Enter -yes- to Try another operation\n");
printf("Enter -no- to Exit the program\n");
scanf("%s",ch2);
}
}
