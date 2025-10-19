// write a program to Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main() {
    int matrix[10][10], rows,cols,i,j,sum=0;
    printf("enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    if(rows != cols) {
        printf("Matrix is not square, so main diagonal sum cannot be calculated.\n");
        return 0;
    }
    printf("enter elements of the matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++) {
        sum=sum+matrix[i][i];
    }
    printf("sum of main diagonal elements of the matrix is: %d\n",sum);
    return 0;
}
