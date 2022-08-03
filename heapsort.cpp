#include<stdio.h>
#include<conio.h>
void maxheapify(int a[],int n,int i)
{
	int largest=i;
	int l=(2*i);
	int r=(2*i)+1;
	while(l<n&& a[l]>a[largest])
	{
		largest=l;
	}
	while(r<n&&a[r]>a[largest])
	{
		largest=r;
	}
	
		if(largest!=i)
		{
			int temp =a[largest];
			a[largest]=a[i];
			a[i]=temp;
			maxheapify(a,n,largest);
		}
	}
	void heapsort(int a[],int n)
	{
		for( int i=n/2-1;i>=0;i--)
		{
			maxheapify(a,n,i);
			
		}
		for( int i=n-1;i>=0;i--)
		{
			int temp=a[0];
			a[0]=a[i];
			a[i]=temp;
			maxheapify(a,i,0);
		}
	}

int main()
{
    int  i;
    int n;
    printf("enter the array size: ");
    scanf("%d", &n);
    int a[n];
    printf("enter array number:");
    for(i=n-1;i>=0;i--)
    {
      	scanf("%d", &a[i]);
	}
	
  heapsort(a,n);
  
  printf("sorted array\n" ,a[i]); 
  
for(i=0;i<n;i++)
{
	printf("%d\t", a[i]);
}
return 0;
 
   
}
