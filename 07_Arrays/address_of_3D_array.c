#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter the value of n1:");
        scanf("%d" ,&n1);
    printf("Enter the value of n2:");
        scanf("%d" ,&n2);
    printf("Enter the value of n3:");
        scanf("%d" ,&n3);
int arr[n1][n2][n3];
    for( int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++) 
        {
            for(int k=0; k<n3; k++) 
            {
                printf("%u ", &arr[i][j][k]);
            }
        }
    }
return 0; 
}
