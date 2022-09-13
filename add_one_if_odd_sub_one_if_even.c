#include<stdio.h>
#include<stdlib.h>
int n=1;
void odd();
void even();
int main()
{
  
  odd();
  return 0;
  
}
void odd()
{
  if(n<=10)
  {
    printf("%d",n+1);
    n++;
    even();
  }
  
}
void even()
{
  if(n<=10)
  {
    printf("%d",n-1);
    n++;
      odd();
  }
}