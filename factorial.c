#include <stdio.h>
int factorial(int n)
{
  if(n==0){
    return 1;
  }
    return n*factorial(n-1);
}
int main(void)
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  printf("Factorial of %d\n ",factorial(num));
  printf("Pavan.G ECE");
  return 0;
}