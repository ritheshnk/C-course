//progtram to cal no of odd number in array
#include <stdio.h>
#include <stdlib.h>
int countodd(int arr[],int n);
int main()
{
int arr[6]={1,2,3,4,5};
  printf("the num of odd is :%d",countodd(arr,6));
}
int countodd(int arr[],int n)
{
  int count=0;
  for(int i=0;i<n;i++)
    {
      if(arr[i]%2 !=0)
      {
        count++;
      }
    }
  return count;
}