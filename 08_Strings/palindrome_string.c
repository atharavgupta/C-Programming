#include<stdio.h>
#include<string.h>
int main() {
    int flag=1,i,len;
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str)-1;
    for(i=0; i<(len/2); i++){
        if(str[i] != str[len-i-1]) {
        flag = 0;
        break; 
        }
    }
    if( flag == 1) {
        printf("It is a plaindrome.");
    }
    else {
        printf("It is not a plaindrome.");
    }
    return 0;
}
