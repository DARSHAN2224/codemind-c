#include<stdio.h>
#include<stdlib.h>
int main()
{
    long x,n,sum=0;
    scanf("%ld",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum>n)
    printf("True");
    else
    printf("False");
}