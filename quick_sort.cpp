#include<stdio.h>
#include<conio.h>
void quicksort(int a[],int ,int);

int partition(int a[],int ,int);
int com;
int main()
{
	int n,i,a[10];
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nthe number of comparision is:%d",com);
	return 0;
}
void quicksort(int a[],int f ,int l)
{
	int p;
	if(f<l)
	{
		p=partition(a,f,l);
		quicksort(a,f,p-1);
		quicksort(a,p+1,l);
		
			}
}
int partition(int a[],int f,int l)
{
	int temp;
	int i,j,piv;
	i=f;
	j=l;
	piv=a[f];
	while(i<j)
	{
		while(piv>=a[i])
		{
			i++;
		}
		while(piv<a[j])
		{
			j--;
		}
		com++;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[f];
	a[f]=a[j];
	a[j]=temp;
	return j;
}
