#include <stdio.h>
int main(void){
  int a[]={10,20,30};
  int *p=a;
  printf("%d\n",*p);//10
  p++;
  printf("%d\n",*p);//20
  p++;
  printf("%d\n",*p);//30
  return 0;
}