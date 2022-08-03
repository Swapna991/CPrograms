#include<stdio.h>
#include<conio.h>
void insertion_sort( int a[],int );
int com=0;
int main()
{
	int i,n ,a[100];
	printf("enter array element:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insertion_sort(int a[], int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
