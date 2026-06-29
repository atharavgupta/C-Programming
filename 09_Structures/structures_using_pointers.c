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
    struct Student* ptr;
    ptr = s;
    for(i=0; i<5; i++) {
    printf("\nEnter record of student %d:\n ", i+1);

    printf("Enter name of the student: ");
    scanf("%s", (ptr+i)->name);

    printf("Enter marks of the student: ");
    scanf("%f", &(ptr+i)->marks);

    printf("Enter roll no. of the student: ");
    scanf("%d", &(ptr+i)->roll);
    }
    printf("\n----------------------X----------------------\n");
    for(i=0; i<5; i++) {
    printf("\nThe record of the student %d is:\n Name = %s\n Marks = %.2f\n Roll No. = %d\n", i+1, (ptr+i)->name, (ptr+i)->marks, (ptr+i)->roll);
    }
    return 0;
}