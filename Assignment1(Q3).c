#include<stdio.h>

int main() {
    int row,col;
    printf("Enter row and column of 2D array respectively: \n");
    scanf("%d %d",&row,&col);
    int a[row][col];
    printf("Enter the elemets of 2D array\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int n=row*col;
    int b[n];
    int k=0;
    printf("Input 2D Array:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            b[k]=a[i][j];
            k++;
        }
    }
    printf("After converting 2D array to 1D array:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",b[i]);
    }
}
