#include<stdio.h>
int main() {
    int i,n,arr[100],largest;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i=0; i<n; i++) {
        if( arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest number is %d", largest);
    return 0;
}