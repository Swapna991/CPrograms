#include<stdio.h>
#include<conio.h>
void avg(int a[],int);
int main()
{
	int i,n=10;
	int a[10];
	printf("enter 10 elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	avg(a,n);
	return 0;
}
void avg(int a[],int n)
{
    int sum=0,c=0,i;
    double avg;
	for(i=0;i<n;i++)
	{
		c++;
		sum=sum+a[i];
		
	}
	avg = (double)sum/n;
	printf("avarage=%2f",avg);	
	printf("\ntotal adition program:%d",c);
	printf("\nloop is execute:%d",n+1);
}
