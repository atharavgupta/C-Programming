#include <stdio.h>
void swap_numbers(int* a, int* b) {
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp; 
}
int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d" ,&a);
    printf("Enter the value of b: ");
    scanf("%d" ,&b);
    swap_numbers(&a,&b);
    printf("The value of a and b after swapping are: %d and %d ", a,b);
    return 0;
}