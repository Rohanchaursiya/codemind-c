#include <stdio.h>
int main()
{
    int n,m,i,j,fact=1;
    scanf("%d",&n);
    for (i=n;i>0;i--)
    {
        fact=1;
        scanf("%d",&m);
        for(j=2;j<=m;j++)
            fact=fact*j;
        printf("%d
", fact);
    }
    return 0;
}