#include<stdio.h>
int prime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    return 0;
    else 
    return 1;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],j=0,b[n];
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a[j]=i;
            j++;
        }
    }
    int k=0;
    for(int i=0;i<j;i++)
    {
       b[k]=prime(a[i]);
       k++;
    }
    for(int i=0;i<k;i++)
    {
        if(b[i]==1)
        c++;
    }
    printf("%d",c);
}