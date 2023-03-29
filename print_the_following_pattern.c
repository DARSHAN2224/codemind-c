//     1
//   1 2 1
// 1 2 3 2 1
#include<stdio.h>
int main()
{
    int n,i,j,w,t;
    // printf("Enter the nth row:");
    scanf("%d",&n);
    int s=n-1;
    if(n%2==0)
    t=n+1;
    else
    t=n;
    for (i = 1; i <= n; i++)
    {
        w=1;
        for ( j = 1; j <=t; j++)
        {
           
            if(j<=t/2)
            {
                printf("%d",w);
                w++;
            }
            else
            {
                printf("%d",w);
                w--;
            }
        }
        // p=p+2;
        printf("
");
    }
    
}