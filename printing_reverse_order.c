//printing no in reverse order  //tail recursive funtion calling func at last
#include<stdio.h>
#include<stdlib.h>
int n;
int reverse(int n);
int main()
{
  scanf("%d",&n);
  reverse(n);
}
int reverse(int n)
{
  if(n==0)
  {
    return 0;
    }
  else
  {
    printf("%d",n);
    return reverse(n-1);  //tail
  }
}