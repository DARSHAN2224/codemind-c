#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n;
    scanf("%ld",&n);
    int max=n%10;
    while(n!=0)
    {
        int rem=n%10;
        if(rem>max)
        max=rem;
        n=n/10;
    }
    printf("%d",max);
}