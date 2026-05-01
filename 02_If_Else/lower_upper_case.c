#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character:-");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90) {
    printf("%c is an upper case letter.",ch);
    }
    else if (ch>=97 && ch<=122){
        printf("%c is a lower case letter.",ch);
    }
    else {
    printf("%c is not an alphabet.",ch);
    }
    return 0;
}
    