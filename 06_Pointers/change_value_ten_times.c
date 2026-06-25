#include<stdio.h>
void change_ten(int* a) {
    *a = *a * 10;
}
int main() {
    int a=5;
    printf("the initial value of a is %d\n" ,a);
    change_ten(&a);
    printf("The value of a after change_ten is %d\n" , a);
    return 0;
}
