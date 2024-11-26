#include <stdio.h>

int main() {
    int n1, n2;    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("The largest number is %d\n", n1);
    } else if (n2 > n1) {
        printf("The largest number is %d\n", n2);
    } else {
        printf("Both numbers are equal\n");
    }
    return 0;
}
