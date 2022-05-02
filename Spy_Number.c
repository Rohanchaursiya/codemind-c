#include<stdio.h>
int main()
{
    int n,r,sum=0,f=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        f=f*r;
        n=n/10;
    }
    if(sum==f)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}