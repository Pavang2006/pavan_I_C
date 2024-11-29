#include<stdio.h>
struct Book{
char name[20];
int pages;
char author[20];
float price;
};
int main(void)
{
  struct Book b1;
  printf("Book name: ");
  scanf("%s",b1.name);
  printf("Author of book: ");
  scanf("%s",b1.author);
  printf("Pages: ");
  scanf("%d",&b1.pages);
  printf("Price: ");
  scanf("%f",&b1.price);
  printf("Book name:%s\n",b1.name) ;
  printf("Author of book: %s\n",b1.author);
  printf("Pages: %d\n",b1.pages);
  printf("Price: %f\n",b1.price);
  return 0;
}