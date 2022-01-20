#include<stdio.h>
int main ()
{
    int N,rem,sum=0,t;
    scanf("%d",&N);
    t=N;
    while(N>0)
    {
        rem=N%10;
        sum=sum*10+rem;
        N=N/10;
    }
    if(t==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}