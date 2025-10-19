// write a program to Perform diagonal traversal of a matrix.
#include<stdio.h>
int main() {
    int matrix[10][10], rows, cols, i, j;
    printf("enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    printf("enter elements of the matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Diagonal traversal of the matrix is: \n");
    // Traverse the main diagonal
    for(i=0;i<rows && i<cols;i++) {
        printf("%d ",matrix[i][i]);
    }
    // Traverse the secondary diagonal
    for(i=0;i<rows && (cols - i - 1) >=
            0;i++) {
            if(i != cols - i - 1) { // To avoid printing the center element twice in case of odd dimension
                printf("%d ",matrix[i][cols - i - 1]);
            }
        } 
    printf("\n");
    return 0;
}