#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n,count=0;
    scanf("%ld",&n);
   for(int i=1;i<=n;i++)
   {
       if(n%i==0)
       count++;
   }
   if(count==2)
    printf("prime");
    else
    printf("not a prime");
}