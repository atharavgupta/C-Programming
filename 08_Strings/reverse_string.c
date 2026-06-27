#include<stdio.h>
#include<string.h>
int main() {
    int i,len;
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str)-1;
    printf("Reversed string is : ");
    for(i=len-1; i>=0; i--) {
        printf("%c", str[i]);
    }
    return 0;
    }
