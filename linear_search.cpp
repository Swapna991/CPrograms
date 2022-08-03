#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[100];
	int key,f=0;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter array numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key element:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			f=1;
			printf("the element %d is found at position %d",key , i+1);
		}
	}
	if(f==0)
	{
		printf("not found");
	}
}
