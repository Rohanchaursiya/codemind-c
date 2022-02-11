#include<stdio.h>
int main()
{
    int num,m,r1,sum1=0,n,r2,sum2=0;
    scanf("%d",&num);
    m=num*num;
    while(num>0)
    {
        r1=num%10;
        sum1=sum1*10+r1;
        num=num/10;
    }
        n=sum1*sum1;
       while(n>0)
       {
        r2=n%10;
        sum2=sum2*10+r2;
        n=n/10;
    }
    if(sum2==m)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
}