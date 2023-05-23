#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("
");
        s--;
    }
    
}