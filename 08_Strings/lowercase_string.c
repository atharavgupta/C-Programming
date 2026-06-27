#include<stdio.h>
#include<string.h>
int main() {
    int i=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    while(str[i] != '\0') {
        if(str[i]>='A' && str[i]<='Z')
        str[i] = str[i] + 32;
        i++;
    }
    printf("The lowerrcase string is: %s", str);
    return 0;
}