#include<stdio.h>
#include<conio.h>
void margesort(int a[],int lb,int up);
void marge(int a[], int lb ,int mid,int up);
int com=0;
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
	margesort(a,0,n-1);
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("the number of comparision is:%d",com);
	return 0;
}
void margesort(int a[], int lb,int up)
{
	int mid;
	if(lb<up)
	{
		mid= lb+(up-lb)/2;
		margesort(a,lb,mid);
		margesort(a,mid+1,up);
		marge(a,lb,mid,up);
	}
}
void marge(int a[],int lb ,int mid,int up)
{
	int i,j,k;
	int n1=mid-lb+1;
	int n2=up-mid;
	int l[n1],r[n2];
	for(i=0;i<n1;i++)
	{
		l[i]=a[lb+i];
		
	}
	for(j=0;j<n2;j++)
	{
		r[j]=a[mid+j+1];
	}
	i=0;
	j=0;
	k=lb;
	while(i<n1&&j<n2)
	{
		com++;
		if(l[i]<=r[j])
		{
			a[k]=l[i];
			i++;
		}
		else
		{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=l[i];
		i++;
		k++;
	}
	while(i<n2)
	{
		a[k]=r[j];
		j++;
		k++;
	}
	
}
