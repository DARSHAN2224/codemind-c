#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int te=n*n,sum=0;
    while(te!=0)
    {
        int rem=te%10;
        sum=sum+rem;
        te=te/10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}