#include <stdio.h>
int main(){
    int principal, rate, time;
    float simple_interest;
    printf("Enter the principal amount:");
    scanf("%d", &principal);
    printf("Enter the rate of interest:");
    scanf("%d", &rate);
    printf("Enter the time in years:");
    scanf("%d", &time);
    simple_interest = (principal * rate * time) / 100.0;
    printf("The simple interest is: %.2f\n", simple_interest);
    return 0;
}