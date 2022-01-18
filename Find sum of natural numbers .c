#include<stdio.h>
int main ()
{
    int i=1,sum=0,N;
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("%d",sum);
    return 0;
}