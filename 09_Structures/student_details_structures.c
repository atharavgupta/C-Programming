#include <stdio.h>
struct Student
{
    int roll;
    float marks;
    char name[100];
};
int main() {
int i;
    struct Student s[5];
    for(i=0; i<5; i++) {
    printf("\nEnter record of student %d:\n ", i+1);

    printf("Enter name of the student: ");
    scanf("%s", s[i].name);

    printf("Enter marks of the student: ");
    scanf("%f", &s[i].marks);

    printf("Enter roll no. of the student: ");
    scanf("%d", &s[i].roll);
    }
    printf("\n----------------------X----------------------\n");
    for(i=0; i<5; i++) {
    printf("\nThe record of the student %d is:\n Name = %s\n Marks = %.2f\n Roll No. = %d\n", i+1, s[i].name, s[i].marks, s[i].roll);
    }
    return 0;
}