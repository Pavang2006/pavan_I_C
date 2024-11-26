#include <stdio.h>
int main() {   
    int num
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 3 == 0) {
        printf("%d is divisible by both 5 and 3.\n", num);
    } else if (num % 5 == 0) {
        printf("%d is divisible by 5 only.\n", num);
    } else if (num % 3 == 0) {
        printf("%d is divisible by 3 only.\n", num);
    } else {
        printf("%d is divisible by neither 5 nor 3.\n", num);
    }

    return 0;
}
