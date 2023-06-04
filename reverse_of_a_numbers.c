#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n,sum=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%ld",sum);
}