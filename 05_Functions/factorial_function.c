#include<stdio.h>
int factorial(int n) {
    int i,fact=1;
    for (i=1;i<=n;i++) {
        fact = fact*i;
    }
    return fact;
}
int main() {
    int result,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    result = factorial(n);
    printf("Factorial of %d is %d.",n,result);
    return 0;           
}
