#include<stdio.h>
#include<conio.h>
void bubble(int a[],int n);
int com=0;
int swap=0;
int main()
{
	int n,a[100];
	int i;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter array number:");
	for(i=0;i<n;i++)
	{
	
    	scanf("%d",&a[i]);
   } 
	bubble(a,n);
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("total comparision is:%d",com);
	printf("\ntotal swap:%d",swap);
	return 0;
}
void bubble(int a[],int n)
{
	int i,j,temp,min;
	
	for(i=0;i<n;i++)
	{
		a[0]= min;
		if(a[0]<a[i])
		{
			i++;
		}
		
     else
		for(j=0;j<n-i-1;j++)
		{
			com++;
			if(a[j+1]<a[j])
			{
				swap ++;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

