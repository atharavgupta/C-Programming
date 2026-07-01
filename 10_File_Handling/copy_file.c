#include <stdio.h>
int main()
{
    char name[100];
    FILE *fp1, *fp2;
    fp1 = fopen("text.txt", "r");
    fp2 = fopen("copy.txt", "w");
    if (fp1 == NULL)
    {
        printf("Cannot open text.txt");
        return 1;
    }
    if (fp2 == NULL)
    {
        printf("Cannot open copy.txt");
        return 1;
    }
    while (fgets(name, 100, fp1) != NULL)
    {
        fputs(name, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Data copied successfully!");
    return 0;
}