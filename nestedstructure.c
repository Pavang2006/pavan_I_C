#include<stdio.h>
struct address{
char city[10];
int pin;
};
struct people{
char name[10];
struct address a;
};
int main (void)
{
  struct people p;
  printf("Person name:");
  scanf("%s",p.name);
  printf("Person city:");
  scanf("%s",p.a.city);
  printf("City pin:");
  scanf("%d",&p.a.pin);
  printf("Person name:%s\n",p.name);
  printf("Person city:%s\n",p.a.city);
  printf("City pin:%d\n",p.a.pin);
  return 0;
}