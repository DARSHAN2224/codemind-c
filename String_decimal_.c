#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int t;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    char s[100];
    scanf("%s",&s);
    int n,count=0;
    n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        count++;
    }
   if(count==n)
    printf("True
");
    else
    printf("False
");
}
}