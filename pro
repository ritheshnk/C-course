#include<stdio.h>
#include<stdlib.h>


int main()
{
  int n;
  char s[30];

  printf("Enter the name of ur love if u have any!! : \n");
  scanf("%s",&s);
  printf("how many times do you want to say I LOVE YOU %s :",s);
  scanf("%d",&n);


  for(int i=1;i<=n;i++)
    {
      printf(" I LOVE YOU %s\n",s);
      // printf("    *        *     \n")
      // printf("\n *   **  **  *  \n");
      // printf("   *  *  *   \n");
      // printf("  * * *      \n");
      // printf("      *      \n");

      printf("  *    *   \n");
      printf("*  *  *  *\n");
      printf("*  *  *  *  \n");
      printf("*  *  *  *\n");
      printf("  *  *  * \n");
      printf("   *  *  \n");
      printf("    *   \n");
    }
  }
