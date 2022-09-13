#include<stdio.h>
#include<stdlib.h>
int main()
{
  int temp,num,rev,rem;
  printf("enter a number\n");
  scanf("%d",&num);
  temp=num;
  rev=0; //initally
  while(num!=0)
    {
      rem=num%10;  // calculating reminder
    rev=(rev*10)+rem;   //floating points are ignored
       num=num/10;   // rev of the num
    }
  printf("the reverse of num is %d\n",rev);
  if(temp==rev)
  {
    printf("is palindrome %d\n",temp);
    
  }else{
    printf("not palindrome %d",temp);
  }
}

/*if we use % with 10 we get last no of the give inpt ie 456%10 we get 6 
and if we divide it by 10 ir 456/10 we get remaining no ie 45*/
