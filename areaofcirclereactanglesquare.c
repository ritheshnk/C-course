//program to calculate area of circle rectangle and square using funtion
#include <stdio.h>
#include <stdlib.h>
float rectangle(float a,float b);
float square(float side);
float circle(float r);
int main()
{
  float a=10.0;
  float b=7.0;
  printf("area of rectangle is %f\n",rectangle(a,b));
  float side=4.0;
  printf("the arera of square is %f\n",square(side));
  float r=10.0;
  printf("area of circle is %f",circle(r));
}
float rectangle(float a,float b)
{
  return a*b;
}
float square(float side)
{
  return side*side;
}
float circle(float r)
{
  return 3.14*r*r;
}