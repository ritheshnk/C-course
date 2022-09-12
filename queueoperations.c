#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void display();
int a[size];
int front=-1;
int rear=-1;
int main()
{
  int ch;
  while(1)
    {
      printf("\n1.Insert element\n");
      printf("2.remove element\n");
      printf("3.display element\n");
      printf("4.Exit\n");
      printf("enter a choice:\n");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:enqueue();
                break;
        case 2:dequeue();
                break;
        case 3:display();
                break;
        case 4: exit(0);
                break;
        default : printf("invalid choice\n");
      }
    }
  }
  void enqueue()
  {
    int item;
    if(rear==size-1)
    {
      printf("overflow\n");
      
    }
    else
    {
      if(front==-1)
        front=0;
      printf("elemet to be inserted is :");
      scanf("%d",&item);
      rear++;
      a[rear]=item;
    }
    
  }
void dequeue()
{
if(front==-1)
{
  printf("underflow\n");
}else{
  printf("item to be deleted is %d",a[front]);
  front++;
}
  }
void display()
{
    
    if (front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
            printf("%d ",a[i]);
        printf("\n");
    }
} 
  
  
