#include<stdio.h>
int divs(int n)
{
    int count=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==9)
    return n;
    else 
    return 0;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],j=0,b[n];
    for(int i=1;i<=n;i++)
    {
       a[j]=divs(i);
       j++;
    }
    
    for(int i=0;i<j;i++)
    {
        if(a[i]!=0)
        {
        printf("%d ",a[i]);
        c++;
        }
    }
    printf("
Total=%d",c);
}