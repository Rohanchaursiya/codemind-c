#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}