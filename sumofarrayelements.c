#include <stdio.h>
int main(void)
{
    int n, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
      {
        scanf("%d", &a[i]);
        sum += a[i];
      }
    printf("The sum of the elements of the array is %d\n", sum);
  printf("Pavan.G ECEC");
    return 0;
}