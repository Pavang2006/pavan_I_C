#include <stdio.h>

int main(void) {
  for(int i=1;i<=10;i++)
    {if(i==6)
    {
     continue;
    }
      
    printf("i=%d\n",i);
    
     }
  return 0;
}