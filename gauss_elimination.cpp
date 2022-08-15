#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n,temp;
	double s;
	int n1=3,n2=1;
	double a[8][8],c[5][5],v[5][5];
	double x[5];
	printf("Enter the order of matrix:");
	scanf("%d",&n);
	printf("Enter the elements of cofficient matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%lf",&c[i][j]);
	   }
	}
	
	printf("Enter the elements of variable matrix:\n ");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("v[%d][%d]=",i,j);
			scanf("%lf" , &v[i][j]);
		}
	}
	
		printf("The cofficient matrix is:\n");//print cofficient matrix
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	          printf("%lf\t",c[i][j]);
              
		}
		printf("\n");
	}
		printf("The variable matrix is:\n");//print variable matrix
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
	          printf("%lf\t",v[i][j]);
              
		}
		printf("\n");
	}
	for(i=0;i<n+n1;i++)// augmented matrix
	{
		for(j=0;j<n+n2;j++)
		{
			a[i][j]=c[i][j];
		
		}
	}
		for(i=0;i<n+n1;i++)
	{
		for(j=0;j<n+n2;j++)
		{
			
			a[i][j+n]=v[i][j];
		}
	}

  printf("The agmented matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
	          printf("%lf\t",a[i][j]);
              
		}
		printf("\n");

    }
for(i=0;i<n-1;i++)//Gaussian elimination
	{
		
		for(k=i+1;k<n;k++)
		{
			temp=a[k][i]/a[i][i];
			for(j=0;j<n+1;j++)
			
			{
				a[k][j]=a[k][j]-temp*a[i][j];
			}
		}
	}
printf("Gaussian elimination matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%lf\t", a[i][j]);
		}
		printf("\n");
	}
x[n-1] = a[n-1][n] / a[n-1][n-1];
    for(i=n-2; i>=0; i--)
    {
        s=0;
        for(j=i+1; j<n; j++)
        {
            s += (a[i][j]*x[j]);
            x[i] = (a[i][n]-s)/a[i][i];
        }
    }
    printf("\nThe result is :\n");
    for(i=0; i<n ; i++)
    {
         printf("\nx[%d] = %lf",i+1,x[i]);
    }
	
return 0;
	

}
