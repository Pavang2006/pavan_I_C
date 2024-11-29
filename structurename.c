#include<stdio.h>

struct student{
char name[5];
int roll_no;
float marks;
};
int main(void){
  struct student s1;
  printf("Name of student1 :");
  scanf("%s",&s1.name);
  printf("\nRoll no of student1 :");
  scanf("%d",&s1.roll_no);
  printf("\nMarks of student1 :");
  scanf("%f",&s1.marks);
  printf("\nStudent1 details are :");
  printf("Name : %s\nRoll no :%d\nMarks :%f\n",s1.name,s1.roll_no,s1.marks);
  return 0;
}
