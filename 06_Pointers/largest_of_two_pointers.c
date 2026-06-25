#include<stdio.h>
int main() {
    int a,b,*ptr1,*ptr2;
printf ("Enter the value of a : ");
scanf("%d",&a);
printf ("Enter the value of b : ");
scanf("%d",&b);
ptr1 = &a;
ptr2 = &b;
if (*ptr1 > *ptr2)
printf("%d is the largest number" ,*ptr1);
else
printf("%d is the largest number" ,*ptr2);
return 0;
}