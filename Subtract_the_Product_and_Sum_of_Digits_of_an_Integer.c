#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    scanf("%d%d",&n);
    int sum=0,prod=1;
    while(n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        prod=prod*rem;
        n=n/10;
    }
    printf("%d",abs(sum-prod));
}
