#include <stdio.h>
int main()
{
    char name[100];
    FILE *fp;
    fp = (fopen("read.txt", "r"));
    fgets(name, 100, fp);
    printf("The data you have written is:\n%s", name);
    fclose(fp);
    return 0;
}