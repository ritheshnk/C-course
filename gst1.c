//progtram to print price with gst
#include <stdio.h>
#include <stdlib.h>
int main()
{
  float price[3];
  printf("enter the price of item 1:");
  scanf("%f\n",&price[0]);
  printf("enter the price of item 2:");
  scanf("%f\n",&price[1]);
  printf("enter the price of item 3:");
  scanf("%f\n",&price[2]);
  printf("the price of item 1 with gst:%f\n",price[0]+price[0]*0.18);
  printf("the price of item 1 with gst:%f\n",price[1]+price[1]*0.18);
  printf("the price of item 1 with gst:%f\n",price[2]+price[2]*0.18);
  return 0;
}