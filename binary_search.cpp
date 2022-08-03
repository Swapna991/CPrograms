#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,lb,ub,n;
	int f=0,mid,key;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key elements:");
	scanf("%d",&key);
	lb=0;
	ub=n-1;
	while(lb<ub&&f==0)
	{
		mid=(lb+ub)/2;
		if(a[mid]==key)
		{
		   f=1;
		   printf("number is found at position  %d",mid+1);	
		}
		else
		{
			if(a[mid]>key)
			{
				ub=mid-1;
			}
			else{
				lb=mid+1;
			}
		}
	}
	if(f==0)
	{
		printf("number is not found");
	}
  return 0;	
}
