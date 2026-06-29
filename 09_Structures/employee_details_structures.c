#include <stdio.h>
struct Employee
{
    int ID;
    float salary;
    char name[100];
};
int main() {
int i;
    struct Employee e[5];
    for(i=0; i<5; i++) {
    printf("\nEnter record of Employee %d:\n ", i+1);

    printf("Enter name of the Employee: ");
    scanf("%s", e[i].name);

    printf("Enter salary of the Employee: ");
    scanf("%f", &e[i].salary);

    printf("Enter ID no. of the Employee: ");
    scanf("%d", &e[i].ID);
    }
    printf("\n----------------------X----------------------\n");
    for(i=0; i<5; i++) {
    printf("\nThe record of the Employee %d is:\n Name = %s\n salary = %.2f\n ID No. = %d\n", i+1, e[i].name, e[i].salary, e[i].ID);
    }
    return 0;
}