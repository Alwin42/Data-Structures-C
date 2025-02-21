#include<stdio.h>
int main()
{
    int i,n,j,ar[50],temp=0,x,flag=0;
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
    printf("\n Enter the element to search \t");
    scanf("%d",&x);
    int high=n-1;
    int low=0;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x<ar[mid])
        {
            high=mid-1;
        }
        else if(x>ar[mid])
        {
            low=mid+1;
        }
        else
        {
            printf("\nElement is found");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nElement not found");

    }
}