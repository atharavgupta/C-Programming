#include<stdio.h>
int main() {
    int a,b,*ptr1, *ptr2, sum;
    printf("Enter the value of a : ");
    scanf("%d" ,&a);
    printf("Enter the value of b : ");
    scanf("%d" ,&b);
    ptr1 = &a;
    ptr2 = &b;
    sum = *ptr1 + *ptr2;
    printf("The sum of a and b is %d\n",sum);
    return 0;
}