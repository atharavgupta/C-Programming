#include <stdio.h>
float area_of_circle(float radius) {
    return 3.14 * radius * radius;
}
int main() {
float radius,area;
printf("Enter the radius of the circle: ");
scanf("%f",&radius);
area = area_of_circle(radius);
printf("The area of the circle with radius %.2f is %.2f.",radius,area);
return 0;
}