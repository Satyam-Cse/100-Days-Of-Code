// write a program to find the sum of all elements in the matrix.

#include<stdio.h>
int main() {
    int matrix[10][10], rows,cols,i,j,sum=0;
    printf("enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    printf("enter elements of the matrix: ");
    scanf("%d ",&matrix[0][0]);
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            sum=sum+matrix[i][j];
        }
    }
    printf("sum of all elements of the matrix is: %d",sum);
    return 0;
}



  