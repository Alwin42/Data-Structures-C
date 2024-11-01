#include<stdio.h>
int main()
{
	int i,n,x,flag=0,pos=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the elements in the array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to be searched in the array\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(ar[i]==x)
		{
			flag=1;
			pos=i;
		}
	}
	
	if(flag==1)
	{
		printf("Element %d found at %d index \t",x,pos);
	}
	else 
	printf("Element not found ");
}
