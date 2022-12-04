#include<stdio.h>
#include<math.h>
int main()
{
    int num,armnum,rem,countdigit=0,temp,temp1,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;
    temp1=num;
    while(temp1>0){
        temp1=temp1/10;
        ++countdigit;
    }
    while(temp>0)
    {
        rem=temp%10;
        printf("%d\n",rem);
        sum=sum+(pow(rem,countdigit)+1e-9);
        
        temp=temp/10;
    }
    printf("%d %d\n",sum,countdigit);
    if(sum==num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}