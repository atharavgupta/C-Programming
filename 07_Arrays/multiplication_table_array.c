#include<stdio.h>
int main() {
    int i, arr[10],a;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=0;i<10;i++) {
        arr[i] = a * (i+1);
    }
    printf("The multiplication table for %d is:\n ",a);
    for(i=0;i<10;i++) {
        printf(" %d X %d = %d\n ",a,(i+1),arr[i]);
    }
    return 0;
}
