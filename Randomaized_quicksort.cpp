#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int part(int a[],int ,int );
void qsort(int a[],int ,int);
int com;
int main()
{
	int n,i,a[100];
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter the array number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,0,n-1);
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nthe comparision is:%d",com);
}
void qsort(int a[],int first,int last)
{
	int pivot;
	if(first<last)
	{
		pivot = part(a,first,last);
		qsort(a,first,pivot-1);
		qsort(a,pivot+1,last);
	}
}
int part(int a[],int first,int last)
{
	 int pivotindex=first+rand()%(last-first+1);
	 int pivot;
	 int i=first-1;
	 int j,temp;
	 pivot=a[pivotindex];
	 temp=a[pivotindex];
	 a[pivotindex]=a[last];
	 a[last]=temp;
	 for(j=first;j<last;j++)
	 {
	    com++;
		if(a[j]<pivot)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
	    }	
	 }
	 temp=a[i+1];
	 a[i+1]=a[last];
	 a[last]=temp;
	 return i+1;
}
