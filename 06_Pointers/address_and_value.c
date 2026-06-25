#include<stdio.h>
int main() {
    int i=80;
    int* ptr = &i;
printf("The address of i is %u\n" , &i);
printf("The value of i is %d\n" , *ptr);
}