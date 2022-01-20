#include<stdio.h>
int main()
{
    int N,r,S=0,temp;
    scanf("%d",&N);
    temp=N;
    while(N>0)
    {
        r=N%10;
        S=S+r;
        N=N/10;
    }
    if(temp%S==0)
    {
        printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
}