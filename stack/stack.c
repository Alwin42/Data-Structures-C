#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size],item;
void push()
{
   if(top==size-1) 
   {
    printf("Stack overflow \n");
   }
   else
   {
      int ele;
    printf("Enter the element to be pushed: ");
    scanf("%d",&ele);
    stack[top]=ele;
    top++;
   }  
}
void pop()
{
   if(top==-1)
   {
    printf("Stack underflow \n");
   }
   else
   {
     item = stack[top];
       top--; 
       printf("The popped element is %d \n",item);
   }
}

void peek()
{
   if(top==-1)
   {
    printf("Stack is empty \n");
   }
   else
   {
    printf("The top element is %d \n",stack[top]);
   }
}
void display()
{
   if(top==-1)
   {
    printf("Stack is empty \n");
   }
   else
   {
    for(int i=top;i>=0;i--)
    {
      printf("%d \n",stack[i]);
    }
   }
}

int main()
{
   printf("Stack operations \n");
   int ch;
   while(1)
   {
     printf("1.Push \n");
     printf("2.Pop \n");
     printf("3.Peek \n");
     printf("4.Display \n");
     printf("5.Exit \n");
     printf("Enter your choice: ");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1: push();
               break;
       case 2: pop();
               break;
       case 3: peek();
               break;
       case 4: display();
               break;
       case 5: exit(0);
       default: printf("Invalid choice \n");
     }
   }
}