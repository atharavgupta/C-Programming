#include<stdio.h>
void printArr(int arr[],int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("%d " , arr[i]);
    }
    printf("\n");
}
void reverse(int arr[],int n) {
    int i,temp;
    for(i=0;i<(n/2);i++) {
        temp = arr[i];
        arr[i] = arr[(n-i-1)];
        arr[(n-i-1)] = temp;
    }
}
int main() {
    int i,n,arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in array:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
printf("Original Array: ");    
printArr(arr,n);
reverse(arr,n);
printf("Reversed Array: ");
printArr(arr,n);
return 0;
}