#include<stdio.h>
#include<stdlib.h>
int main(){
    long x,n;
    scanf("%ld%ld",&n,&x);
    long temp=n,sum=0,sum1=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    int f,l,d=1;
    for(int i=1;i<=x;i++)
    {
        d=d*10;
    }
    f=temp%d;
    l=sum%d;
    while(l>0)
    {
        int rem=l%10;
        sum1=sum1*10+rem;
        l=l/10;
    }
    printf("%d",abs(f-sum1));
}