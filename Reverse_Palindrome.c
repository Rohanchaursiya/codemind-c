#include<stdio.h>
int rev(int n)
{
    int i,d=0,t;
    t=n;
    while(t!=0)
    {
        i=t%10;
        d=d*10+i;
        t/=10;
    }
    return d;
}
int main()
{
    int n;
    scanf("%d",&n);
    n+=rev(n);
    while(1)
    {
        if (n==rev(n))
        break;
        n=n+rev(n);
    }
    printf("%d",n);
    return 0;
}