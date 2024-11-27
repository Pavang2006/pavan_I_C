#include <stdio.h>
int largest(int a, int b, int c){
    if(a>b && a>c) return a;
     if(b>a && b>c) return b;
     return c;
}
int main(void)
{
    int x,y,z;  
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    printf("The largest number is: %d\n",largest(x,y,z));
  printf("Pavan.G ECE");
  return 0;
}
