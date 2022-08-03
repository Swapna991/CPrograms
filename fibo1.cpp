#include<stdio.h>
#include<conio.h>
void fibonacci(int n);
int main()
{
	int n=10;
	printf("10 fibonacci series");
	if(n==1)
	{
		printf("0");
		
	}
	else
	{
		printf("%d %d",0,1);
		 fibonacci(n-2);
	}
	return 0;
}
void fibonacci(int n)
{
	 static int n1=0,n2=1,n3;
	 {
	 	n3=n1+n2;
	 	n1=n2;
	 	n2=n3;
	 	printf	("%d",n3);
         fibonacci(n-1);
	 }
}
