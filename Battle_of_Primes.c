#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,n,i,k=10000;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<k;i++)
    {
        if(prime(a+b+i))
        {
            printf("%d",i);
            break;
        }
    }
}