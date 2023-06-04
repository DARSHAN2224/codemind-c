#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int te=n,sum=0,prod=1;
    while(te!=0)
    {
        int rem=te%10;
        sum=sum+rem;
        prod=prod*rem;
        te=te/10;
    }
    if(prod==sum)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}