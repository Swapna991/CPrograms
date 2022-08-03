#include<stdio.h>
#include<conio.h>
int main()
{
	int x,n,i,c=0;
	int result=1;
	printf("enter x value:");
	scanf("%d",&x);
	printf("enter n value:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("result is:1");
	}
	else if(n==1)
	{
		printf("result is:%d",x);
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			c++;
			result=result*x;
			
		}
		printf("result is:%d",result);
	}
	printf("\nthe number of loop execute:%d",c);
}

