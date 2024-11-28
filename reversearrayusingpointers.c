#include <stdio.h>

int main(void) {
  int n[5] = {1, 2, 3, 4, 5};
  int *p = n;
  for(int i=0; i<5; i++) {
    printf("%d ", *(p+4-i));
  }
  return 0;
  
}
