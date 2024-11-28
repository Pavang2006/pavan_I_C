#include<stdio.h>
int main(void)
{
  int x=10;
  int *ptr=&x;
  printf("Adderss of x is %p\n",ptr);
  printf("Value of x is %d\n",*ptr);
  return 0;
}