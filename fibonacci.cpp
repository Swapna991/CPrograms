#include<stdio.h>
#include<conio.h>
int main()
{
	int com;
	int n=10;
	int j, a=0,b=1;
	int c;

	printf(" 1st 10 fibonacci series:");
	for(j=0;j<n;j++)
	{
		
		if(j<=1)
		{
		
		c=j;
       	}
		else 
		{
			c=a+b;
			a=b;
			b=c;
		}
		printf("%d\t",c);
		
	}
	
	return 0;
}
