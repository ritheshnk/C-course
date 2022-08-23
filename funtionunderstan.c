//program to print namaste if person is indian else bonjour if person is fresh
#include <stdio.h>
#include <stdlib.h>
void namaste();
void bonjour();
char ch;
int main(){
  printf("select i for indian f for french\n");
  scanf("%c",&ch);
  if(ch=='i')
    namaste(); 
  else{
    bonjour();
  }
}
void namaste(){
  printf("namaste!!\n");
}
void bonjour(){
  printf("bonjour");
}