#include <stdio.h>
#include "matrix.h"

void add(int mat1[][10],int mat2[][10],int size1) {
    int output[10][10];
    for (int i=1; i<= size1; i++){
        for (int j=1; j<=size1; j++){
            output[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d\t",output[i][j]);
        }
        printf("\n");
    }
}

void multi(int mat1[][10],int mat2[][10],int size1) {
    int output[10][10];
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
}

void sub(int mat1[][10],int mat2[][10],int size1) {
    int output[10][10];
    for (int i=1; i<=size1; i++){
        for (int j=1; j<=size1; j++){
            output[i][j]=mat1[i][j]-mat2[i][j];
            printf("%d\t",output[i][j]);
        }
        printf("\n");
    }
}