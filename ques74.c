// write a program to find the transpose of a matrix.

#include<stdio.h>
int main() {
    int matrix[10][10], transpose[10][10], rows, cols, i, j;
    printf("enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    printf("enter elements of the matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            transpose[i][j]=matrix[i][j];
        }
    }
    printf("transpose of the matrix is: \n");
    for(i=0;i<cols;i++) {
        for(j=0;j<rows;j++) {
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
   

