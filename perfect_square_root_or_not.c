#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n,flag=0;
    scanf("%ld",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && n/i==i)
        flag=1;
    }
    if(flag)
    printf("True");
    else
    printf("False");
}