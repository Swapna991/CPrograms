#include<stdio.h>
#include<conio.h>
int main()
{
	int com=0;
	int i,j,n,temp;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf ("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
	  temp=a[i];
	  j=i-1;
	  
	  while(j>=0&&temp<a[j])
	  {
	  	com++;
	  	a[j+1]=a[j];
	  	j=j-1;
	  }
	  a[j+1]=temp;
	  	
	}
	for(i=0;i<n;i++)
	
	{
		printf("%d\t", a[i]);
	}
	 printf("\nThe Number Of Comparisons Of Program: %d", com);

	
	return 0;
	
	
}
