// write a program to Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main() {
    int matrix[10][10], rows,cols,i,j,rowsum[10];
    printf("enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    printf("enter elements of the matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++) {
        rowsum[i]=0;
        for(j=0;j<cols;j++) {
            rowsum[i]=rowsum[i]+matrix[i][j];
        }
    }
    printf("sum of each row of the matrix is: \n");
    for(i=0;i<rows;i++) {
        printf("Row %d: %d\n",i+1,rowsum[i]);
    }
    return 0;
}

