#include<stdio.h>
int even_odd(int num) {
    int flag=1;
    if (num%2==0) {
        flag=0;
    }
    return flag;
}
int main() {
    int result,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = even_odd(num);
    if (result==0) {
        printf("%d is an even number.",num);
    }
    else {
        printf("%d is an odd number.",num);
    }
    return 0;
}