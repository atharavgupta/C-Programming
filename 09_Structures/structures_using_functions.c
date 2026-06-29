#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[100];
};

void display(struct Student s) {

    printf("\nStudent Details\n");

    printf("Name : %s\n", s.name);

    printf("Roll : %d\n", s.roll);

    printf("Marks : %.2f\n", s.marks);
}

int main() {

    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}