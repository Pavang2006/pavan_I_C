#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 5, 15, 30}, max = arr[0];
    for (int i = 1; i < 5; i++) if (arr[i] > max) max = arr[i];
    printf("Max: %d\n", max);
    printf("Parinitha");
    return 0;
}