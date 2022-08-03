#include<stdio.h>
#include<conio.h>
long int fact(int n);
int com;
int main()
{
	int n;
	printf("enter any integer number:");
	scanf("%d",&n);
     int f=fact(n);
	printf("factorial of %d number is %d",n,f);
}
long int fact(int n)
{
	if(n<0)
	{
		printf(" factorial of negetive number is not possible");
	}
	else if(n==0)
	{
		return 1;
		
	}
	else
	{
		return n*fact(n-1);
	}

}
