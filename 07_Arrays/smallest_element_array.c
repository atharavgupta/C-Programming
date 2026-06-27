#include<stdio.h>
int main() {
    int i,n,arr[100],smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    for(i=0; i<n; i++) {
        if( arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("The smallest number is %d", smallest);
    return 0;
}