#include<stdio.h>
int main()
{
    int n,i,j;
    // printf("Enter the nth row:");
    scanf("%d",&n);
    int s=n-1,p=n;
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <=s; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <=n; j++)
        {
           
            if(i==n||i==1||j==1||j==n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        s--;
        printf("
");
    }
    
}