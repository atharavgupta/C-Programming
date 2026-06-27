#include<stdio.h>
int main() {
    int i,marks[10];
    int* ptr = marks;
    printf("Enter the number:\n");
    for(i=0;i<10;i++) {
        scanf("%d\n", &marks[i]);
    }
    for(i=0;i<10;i++) {
        printf("The number entered are: %d\n" , marks[i]);
    }
    printf("The number enterd on the ptr+2 address is %d", *(ptr+2));
    return 0;
}