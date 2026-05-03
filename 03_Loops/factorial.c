#include <stdio.h>
int main() {
int n,i,product=1;
printf("Enter the value of n:-");
scanf("%d",&n);
for (i=n;i>0;i--){
    product=product*i;
}
printf("The factorial of %d is:- %d",n,product);
return 0;
}