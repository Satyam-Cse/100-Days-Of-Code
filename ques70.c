//Read and print a matrix.
#include<stdio.h>
int main() {
    int row,col,i,j;
    printf("enter number of rows: ");
    scanf("%d",&row);
    printf("enter number of columns: ");
    scanf("%d",&col);
    int matrix[row][col];
    printf("enter elements of the matrix:\n");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}