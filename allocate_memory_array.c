#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++) arr[i] = i + 1;
    for (int i = 0; i < 3; i++) printf("%d ", arr[i]);
    free(arr);
    printf("Parinitha");
    return 0;
}