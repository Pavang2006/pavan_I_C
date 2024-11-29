#include<stdio.h>
struct Employee {
 char name[20];
 int id;
float salary;
};
int main(void)
{
  struct Employee employee[2];
  for(int i=0;i<2;i++){
    printf("Employee Name:");
    scanf("%s",employee[i].name);
    printf("Employee ID:");
    scanf("%d",&employee[i].id);
    printf("Employee Salary:");
    scanf("%f",&employee[i].salary);
  }
  for(int i=0;i<2;i++){
    printf("Employee Name:%s\n",employee[i].name);
    printf("Employee ID:%d\n",employee[i].id);
    printf("Employee  Salary:%f\n",employee[i].salary);
  }
  return 0;
}