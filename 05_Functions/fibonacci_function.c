#include <stdio.h>
void fibonacci(int n){
 int i,a=0,b=1,c;
  for(i=1;i<=n;i++) {
    printf(" %d ",a);
    c=a+b;
    a=b;
    b=c;
  }
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    fibonacci(n);
    return 0;
}
