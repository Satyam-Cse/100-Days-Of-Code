// wrie a program to Check if the elements on the diagonal of a matrix are distinct.

#include<stdio.h>
int main() {
    int matrix[10][10], rows,cols,i,j,diagelements[10],isdistinct=1;
    printf("enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows,&cols);
    if(rows != cols) {
        printf("Matrix is not square, so diagonal elements cannot be checked for distinctness.\n");
        return 0;
    }
    printf("enter elements of the matrix: ");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++) {
        diagelements[i]=matrix[i][i];
    }
    for(i=0;i<rows;i++) {
        for(j=i+1;j<rows;j++) {
            if(diagelements[i]==diagelements[j]) {
                isdistinct=0;
                break;
            }
        }
        if(!isdistinct) {
            break;
        }
    }
    if(isdistinct) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }
    return 0;
}
