#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    printf("Value: %d\n", *ptr);
    free(ptr);
    printf("Parinitha");
    return 0;
}