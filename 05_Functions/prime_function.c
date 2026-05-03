#include<stdio.h>
int prime(int n) {
    int i,flag=1;
    if (n<=1) {
        return 0;
    }
    for (i=2;i<=n;i++) {
        if(n%i==0) {
            flag=0;
            break;
        }
    }
    return flag;
}
int main() {
    int result,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    result = prime(n);
    if (result==1) {
        printf("%d is a prime number.",n);
    }
    else {
        printf("%d is not a prime number.",n);
    }
    return 0;
}