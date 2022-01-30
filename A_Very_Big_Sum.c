#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long int r[n],t=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&r[i]);
        t=t+r[i];
    }
    printf("%ld",t);
    return 0;
}