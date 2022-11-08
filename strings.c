#include <stdio.h>
#include <stdlib.h>
void printchar(char arr[]);
char first[]="roman";
char last[]="reigns";
int main()
{
  printchar(first);
  printchar(last);
  
}
void printchar(char arr[])
{
  for(int i=0;arr[i]!='\0';i++)
    {
      printf("%c",arr[i]);
    }
  printf("\n");
}
