#include<stdio.h>
struct student {
 char name[20];
 int roll;
 int age;
 char gender;
 char clg_name;
};
int main(void)
{
  struct student s1;
  printf("Name: ") ;
  scanf("%s",s1.name);
  printf("Roll: ");
  scanf("%d",&s1.roll);
  printf("Age: ");
  scanf("%d",&s1.age);
  printf("Gender: ");
  scanf("%c",&s1.gender);
  printf("College: ");
  scanf("%s",s1.clg_name);
  printf("Name: %s\n",s1.name);
  printf("Roll: %d\n",s1.roll);
  printf("Age: %d\n",s1.age);
  printf("Gender: %c\n",s1.gender);
  printf("College: %s\n",s1.clg_name);
  return 0;
  
}