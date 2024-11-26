#include<stdio.h> 
int main() 
{
    float p, t, r, interest;
    printf("Enter the principal amount (p): ");
    scanf("%f", &p);
    printf("Enter the time period in years (t): ");
    scanf("%f", &t);
    printf("Enter the rate of interest (r) in percentage: ");
    scanf("%f", &r);
    interest = (p * t * r) / 100;
    printf("The simple interest is: %.2f\n", interest);
    return 0;
}
