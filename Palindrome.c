#include<stdio.h>
#include<stdlib.h>
int main(){
    long x,n;
    scanf("%ld",&n);
    long temp=n,sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==temp)
    printf("True");
    else
    printf("False");
}