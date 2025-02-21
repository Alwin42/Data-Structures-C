#include<stdio.h>
int main()
{
    int i,n,j,ar[50],temp=0;
    printf("Enter the limit : \t");
    scanf("%d",&n);
    printf("Enter the elements in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(ar[j]>ar[j+1])
        {
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]= temp;
        }
        }
        
    }
    printf("Sorted array \n");
    for(i=0;i<n;i++)
    {
       printf("%d \t",ar[i]);
    }
}