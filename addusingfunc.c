//program to perform addtion using funtion
#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b);
int a,b;
int main()
{
  printf("enter first number:");
  scanf("%d",&a);
    printf("enter second number:");
  scanf("%d",&b);
  int s=sum(a,b);
  printf("%d",s);

}
int sum(int a,int b){
  return a+b;
}