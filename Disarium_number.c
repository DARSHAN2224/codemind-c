#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,sum=0,sum1=0;
    scanf("%d",&n);
    int t=n,count=1;
   while(n>0)
   {
       int rem=n%10;
       sum=sum*10+rem;
       n=n/10;
   }
   while(sum>0)
   {
       int rem=sum%10;
       int p=1;
       for(int i=1;i<=count;i++)
       {
           p=p*rem;
       }
       sum1=sum1+p;
       sum=sum/10;
       count++;
   }
   
    if(sum1==t)
    printf("True");
    else
    printf("False");
}