#include<stdio.h>
int minprime(int n)
{
    int i=1,j=1,count=0;
    while(n>0)
    {count=0;
        for(j=1;j<=n;j++)
        {
        if(n%j==0)
        count++;
        }
        if(count==2)
        break;n--;
    }
    return n;
}
int maxprime(int n)
{
   int i=1,j=1,count=0;
    while(1)
    {count=0;
        for(j=1;j<=n;j++)
        {
        if(n%j==0)
        count++;
        }
        if(count==2)
        break;n++;
    }
    return n;
}
int main()
{
    int a,t,y;
    scanf("%d",&a);
    t=(maxprime(a)-a)<(a-minprime(a))?(maxprime(a)-a):(a-minprime(a));
    printf("%d",t);
    return 0;
}