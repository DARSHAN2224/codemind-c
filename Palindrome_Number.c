#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int te=n,sum=0;
        while(te!=0)
        {
            int rem=te%10;
            sum=sum*10+rem;
            te=te/10;
        }
        if(n==sum)
        printf("True
");
        else
        printf("False
");
    }
}