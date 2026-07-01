#include <stdio.h>
int main()
{
    char name[100];
    FILE *fp;
    fp = fopen("write.txt", "w");
    fprintf(fp, "Enter anything you want to write: ");
    fgets(name, 100, stdin);
    fputs(name, fp);
    fclose(fp);
    printf("Data written successfully!");
    return 0;
}