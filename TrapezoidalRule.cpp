#include<stdio.h>
#include<conio.h>
#include<math.h>

float func(float x)
{
   return (4*x-3*x*x);
}
int main()
{

    int n,i;
    float y[15],lb ,ub,h,x;
    float sum, sum1=0,it;
    printf("Enter the interval:");
    scanf("%d", &n);
    printf("Enter the lower bound:");
    scanf("%f",&lb);
    printf("enter the upper bound:");
    scanf("%f",&ub);

    h=(ub+lb)/n;
   
    x=lb;
    for(i=0;i<=n;i++)
    {
       y[i]=func(x);
       x=x+h;
    }

   sum=y[0]+y[n];
   
   for(i=1;i<n;i++)
   {
      sum1=sum1+y[i];
   }

it=(h/2)*(sum+2*sum1);
printf("The Result is =%.3f",it);
return 0;

}
