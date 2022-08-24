//program to perform addtion using funtion
#include <stdio.h>
#include <stdlib.h>
int i,n;
void multi(int n);
int main()
{
  printf("enter a number:");
  scanf("%d",&n);
  multi(n);
}
void multi(int n){
  for(i=1;i<11;i++)
    printf("%d\n",n*i);
}