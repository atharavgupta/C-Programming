#include<stdio.h>
int main() {
    int n, arr[100],i,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    printf("The sum of the elements of the array is %d", sum);
    return 0;
}