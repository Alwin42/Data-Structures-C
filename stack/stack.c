#include<stdio.h>
#include<conio.h>
void push();
{
   if(top==size-1) 
   {
    printf("Stack overflow \n");
   }
   else
   {
    printf("Enter the element to be pushed: ");
    scanf("%d",&ele);
    top++;
    stack[top]=ele;
   }
   
}