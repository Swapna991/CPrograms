#include<stdio.h>
#include<conio.h>
void selection(int a[],int n);
int com=0;
int main()
{
	int n, i,a[10];
	
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array numbers :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("total comparison:%d",com);
	return 0;
}
void selection(int a[], int n)
{
	int i,j,min;
	int temp;
	for(i=0;i<n-1;i++)
	{
		min =i;
		for(j=i+1;j<n;j++)
		{
			com++;
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
