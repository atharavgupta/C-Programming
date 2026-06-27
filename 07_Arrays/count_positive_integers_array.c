#include <stdio.h>
int count(int arr[],int n) {
    int i;
    int num_positive = 0;
    for(i=0;i<n;i++) {
        if (arr[i]>0) {
        num_positive++;
    }
 }
return num_positive;
}
int main() {
    int i,n,arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in array:\n");
    for(i=0;i<n;i++) {
        scanf("%d" , &arr[i]);
    }
    printf("The number of positive integers in the array is %d" , count(arr,n));
return 0;
}