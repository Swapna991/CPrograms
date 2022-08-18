#include<stdio.h>
#include<conio.h>

float func(float x)
{
    return (x/(1+x));
}
int main()
{
     float y[100],h,it, lb ,ub,x;
     float sum1=0,sum2=0,sum;
     int n,i;
     printf("Enter the interval :");
     scanf("%d",&n);
     printf("enter the Lower bound:");
     scanf("%f",&lb);
     printf("enter the Upper bound:");
     scanf("%f",&ub);
     h=(ub-lb)/n;
     x=lb;
     for(i=0;i<=n;i++)
     {
        y[i]=func(x);
        x=x+h;
     }  
    
      sum= y[0]+y[n];
     
     for(i=1;i<n;i=i+2)
     {
        sum1=sum1+y[i];
     }
     
    for(i=2;i<n;i=i+2)
     {
        sum2=sum2+y[i];
     }
    
    it=h/3*(sum+4*sum1+2*sum2);
    printf("\n The result is=%.3f",it);
     return 0; 
}