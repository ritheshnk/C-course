//celcius to fahrenhiet
#include <stdio.h>
#include <stdlib.h>
float  faren(float celcius);
int main()
{
 printf("the fah is %f",faren(25.3)); 
}float faren(float celcius)
{
  float fah;
  fah=(celcius)*9/5 + 32;  
  return fah;
}