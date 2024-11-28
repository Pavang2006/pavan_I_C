#include<stdio.h>
#include<stdlib.h>
int main(void){
  int n,*arr;
  printf("Enter the number of elements: \n");
  scanf("%d",&n);
  arr=(int*)malloc(n*sizeof(int));
  if(arr==NULL){
    printf("Memory not allocated\n");
    return 1;
  }
  printf("Enter %d elements: \n",n);
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("The elements are: \n");
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
  free(arr);
  printf("\nMemory freed ");
  return 0;

}