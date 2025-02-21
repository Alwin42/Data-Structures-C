#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements to array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the elements to search : \t");
    scanf("%d",&x);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(x==ar[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("The element found in the array %d",x);

    }
    else
    {
        printf("Element not found in the array");

    }
}