#include<stdio.h>
#include<stdlib.h>


int ispalindrome(int num)
{
    int originalnum=num;
    int rev=0;

    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(originalnum==rev)
    {
        return 1;

    }else{
        return 0;
    }

}

int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d",&num);

    if(ispalindrome(num))
    {
            printf("\nthe number is palindrome\n");
    }else{
        printf("\nthe number is not palindrome\n");
    }
}
