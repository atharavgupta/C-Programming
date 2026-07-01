#include <stdio.h>
int main()
{
    char name[100];
    int count = 0;
    int i;
    FILE *fp;
    fp = fopen("character.txt", "r");
    while (fgets(name, 100, fp) != NULL)
    {
        for (i = 0; name[i] != '\0'; i++)
        {
            if (name[i] != '\n')
            {
                count++;
            }
        }
    }
    fclose(fp);
    printf("The total characters are: %d", count);
    return 0;
}