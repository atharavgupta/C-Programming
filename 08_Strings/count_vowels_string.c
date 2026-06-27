#include<stdio.h>
#include<string.h>
int main() {
    int vowels=0,i=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    while(str[i] != '\0') {
        if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'||
           str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
    vowels++;
    i++;
    }
    printf("The number of vowels are %d", vowels);
    return 0;
}
