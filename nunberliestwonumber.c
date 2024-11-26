#include <stdio.h>

int main() {
int num, lower, upper;

   printf("Enter the lower bound: ");
    scanf("%d", &lower);

    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Enter the number to check: ");
    scanf("%d", &num);
    if (num >= lower && num <= upper) {
        printf("%d lies between %d and %d.\n", num, lower, upper);
    } else {
        printf("%d does not lie between %d and %d.\n", num, lower, upper);
    }

    return 0;
}
