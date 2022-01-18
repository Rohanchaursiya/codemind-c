#include<stdio.h>
int main ()
{
    int n,S,rem,sum=0;
    scanf("%d",&n);
    S=n*n;
    while(S!=0)
    {
        rem=S%10;
        sum=sum+rem;
        S=S/10;
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