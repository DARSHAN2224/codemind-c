#include<stdio.h>
int main(){
    int x,n;
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",x,i,x*i);
    }
}