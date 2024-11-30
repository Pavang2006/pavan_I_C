#include<stdio.h>
int main(void){
  float celsius,fahrenheit;
  printf("Enter temperature in celsius:");
  scanf("%f",&celsius);
  fahrenheit=(celsius*9/5)+32;
  printf("%.2fcelsius= %.2f  fahrenheit",celsius,fahrenheit);
  return 0;
}
