#include <stdio.h>
int sum(int a , int b) {
    int result;
    result = a+b;
    return result;
}
int main() {
    int a,b,result;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    result= sum(a,b);
    printf("The sum of %d and %d is %d.",a,b,result);
    return 0;
}