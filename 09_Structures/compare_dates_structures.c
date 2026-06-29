#include <stdio.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
int compare(struct Date d1, struct Date d2)
{
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    struct Date d1, d2;
    int result;
    printf("Enter the first date: (dd/mm/yyyy)\n");
    scanf("%d %d %d", &d1.dd, &d1.mm, &d1.yyyy);
    printf("Enter the second date: (dd/mm/yyyy)\n");
    scanf("%d %d %d", &d2.dd, &d2.mm, &d2.yyyy);
    result = compare(d1, d2);
    if (result == 0)
    {
        printf("Both the dates are equal.");
    }
    else
    {
        printf("Both dates are not equal.");
    }
    return 0;
}