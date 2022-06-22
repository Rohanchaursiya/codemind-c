#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            count++;
        }
    }
    printf("%d",count);
    
}