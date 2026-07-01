#include <stdio.h>
int main()
{
    char name[100];
    FILE *fp;
    fp = fopen("append.txt", "a");
    fprintf(fp, "Enter anything you want to add: ");
    fgets(name, 100, stdin);
    fputs(name, fp);
    fclose(fp);
    printf("Data added successfully!");
    return 0;
}