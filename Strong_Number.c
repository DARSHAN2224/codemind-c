#include<stdio.h>
int main()
{
int t,n;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    scanf("%d",&n);
    int te=n,sum=0;
    while(te!=0)
    {
        int f=1;
        int rem=te%10;
        for(int j=1;j<=rem;j++)
        {
            f=f*j;
        }
        sum=sum+f;
        te=te/10;
    }
    if(n==sum)
    printf("Strong
");
    else
    printf("Not Strong
");
}
}