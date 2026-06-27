#include<stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter 1st string: ");
    fgets(str1, 100, stdin);
    printf("Enter 2nd string: ");
    fgets(str2, 100, stdin);
    if(strcmp(str1, str2) == 0)
    printf("Both strings are equal.");
    else
    printf("Both strings are not equal.");
    return 0;
}
