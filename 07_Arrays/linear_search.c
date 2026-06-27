#include<stdio.h>
int main() {
    int i,n,key,found=0,arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to find: ");
    scanf("%d", &key);
    for(i=0; i<n; i++) {
        if(arr[i] == key) {
            found = 1;
        }
    }
    if( found == 1)
    printf("%d is found in the array", key);
    else
    printf("%d is not found in the array", key);
    return 0;
}