// write a program to Check if a matrix is symmetric.
#include<stdio.h>
int main() {
    int matrix[10][10], transpose[10][10], rows, cols, i, j, isSymmetric = 1;
    printf("enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    if (rows != cols) {
        printf("Matrix is not symmetric as it is not square.\n");
        return 0;
    }
    printf("enter elements of the matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix[i][j]);
            }
    }
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            transpose[j][i]=matrix[i][j];
            }
        }
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            if(matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }
    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}