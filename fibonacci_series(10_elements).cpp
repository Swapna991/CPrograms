#include<stdio.h>
#include<conio.h>
void fib(int);
int main()
{
	int n=10;
  int n1=0,n2=1,n3,i;
	printf("10 fibonacci seriese:");
     for(i=0;i<n;i++)
     {
     	if(i<=1)
     	{
     		n3=i;
		 }
		 else
		 {
		 	n3=n1+n2;
		 	n1=n2;
		 	n2=n3;
		 }
		 printf("%d\t",n3);
	 }
}
