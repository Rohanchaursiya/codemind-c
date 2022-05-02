#include<stdio.h>
int main()
{
    int n,m,r,sum=0;
    scanf("%d",&n);
    m=n*n;
    while(m>0)
    {
        r=m%10;
        sum=sum+r;
        m=m/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
         printf("Not Neon Number");
    }
    return 0;
}