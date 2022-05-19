#include<stdio.h>
int main()
{
    int n,rem,s=0;
    scanf("%d",&n);
    while(n>9)
    {
        s=0;
        while(n)
        {
        rem=n%10;
        s=s+rem;
        n=n/10;
        }
        n=s;
    }
    printf("%d",n);
    return 0;
}