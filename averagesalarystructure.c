#include <stdio.h>
struct employee {
    int n;
    float salary;
};
int main() {
    struct employee e;
    float  total = 0.0, average;

    printf("Enter the number of employees: ");
    scanf("%d", &e.n);

    for (int i = 0; i <e.n; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &e.salary);
        total += e. salary;  
    }
    average = total / e. n;

    printf("The average salary is: %.2f\n", average);
    return 0;
}