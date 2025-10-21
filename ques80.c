// write a program to Multiply two matrices.
#include<stdio.h>
int main() {
    int matrix1[10][10], matrix2[10][10], product[10][10], rows1, cols1, rows2, cols2, i, j, k;
    printf("enter number of rows and columns of first matrix: ");
    scanf("%d %d",&rows1,&cols1);
    printf("enter number of rows and columns of second matrix: ");
    scanf("%d %d",&rows2,&cols2);
    if(cols1 != rows2) {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
        return 0;
    }
    printf("enter elements of first matrix: ");
    for(i=0;i<rows1;i++) {
        for(j=0;j<cols1;j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter elements of second matrix: ");
    for(i=0;i<rows2;i++) {
        for(j=0;j<cols2;j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }
    // Initialize product matrix to zero
    for(i=0;i<rows1;i++) {
        for(j=0;j<cols2;j++) {
            product[i][j]=0;
        }
    }
    // Perform matrix multiplication
    for(i=0;i<rows1;i++) {
        for(j=0;j<cols2;j++) {
            for(k=0;k<cols1;k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("product of the two matrices is: \n");
    for(i=0;i<rows1;i++) {
        for(j=0;j<cols2;j++) {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
