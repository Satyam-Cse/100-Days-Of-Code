// write a program to Add two matrices.

#include<stdio.h>
int main() {
    int matrix1[10][10], matrix2[10][10], sum[10][10], rows, cols, i, j;
    printf("enter number of rows and columns of matrices: ");
    scanf("%d %d",&rows,&cols);
    printf("enter elements of first matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter elements of second matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("sum of the two matrices is: \n");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}