#include<stdio.h>
#include<conio.h>
int main()
{
	int result=1,n,i,count=0;
	printf("enter the any integer number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count++;
		result=result*i;
	}
	printf("result is:%d", result);
	printf("\nloop execute:%d",count);
}
