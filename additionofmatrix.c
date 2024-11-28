#include<stdio.h>
int main(void)
{
  int rows,columns;
  printf("Enter the number of rows and columns :" );
  scanf("%d %d",&rows,&columns);
  int a[rows][columns],b[rows][columns],sum[rows][columns];
  printf("Enter the elements of A" );
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      scanf("%d",&a[i][j]);
    }
    
  }
  printf("Enter the elements of B" );
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      scanf("%d",&b[i][j]);
    }
    
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      sum[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("The sum of the matrix is : \n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
      printf("%d ",sum[i][j]);
    }
    printf("\n");2
  }   
  
  return 0;
}