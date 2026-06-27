#include<stdio.h>
#include<string.h>
int main() {
    int count=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Lenght of the string is %d", strlen(str)-1);
    return 0;
}