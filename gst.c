//program to perform addtion using funtion
#include <stdio.h>
#include <stdlib.h>
void gst( float values); //parameters
float values;
int main()
{
  printf("enter the values:");
  scanf("%f",&values);
  gst(values);
}
void gst(float values){
  values=values+(values*1.85);
  printf("value after applying gst is : %f",values);
}