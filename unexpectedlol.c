//progtram to print price with gst
#include <stdio.h>
#include <stdlib.h>
void print(int ar[],int n);
int main()
{
 int ar[4]={5,6,7,8};
  print(ar,4);
}
void print(int ar[],int n)
{
for(int i=0;i<n;i++)
  {
      printf("the vAlues:%d\n",ar[i]);

  }
}