#include<stdio.h>
int main() {
    int i,j,rows,colmn;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&colmn);
    for (i=1;i<=rows;i++) {
        for (j=1;j<=colmn;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}