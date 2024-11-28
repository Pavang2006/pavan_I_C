#include<stdio.h>
#include<string.h>
int main(void){
  char a[100],b[100];
  printf("Enter the string : ");
  scanf("%s",a);
  printf("Enter the string : ");
  scanf("%s",b);
  printf("The length of the string is %d\n",strlen(a));
  printf("The length of the string is %d\n",strlen(b));
  printf("The comparing string is %d\n",strcmp(a,b));
  printf("The concatenated string is %s\n",strcat(a,b));
  printf("The length string is %s\n",strlen(b,a));
  printf("The copy of the string is %s\n",strcpy(a,b));
  printf("The copy of the string is %s\n",strcpy(b,a));
  return 0;
}
