#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    int r[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&r[i]);
    }
    for(i=0;i<a;i++)
    {int t=0;
        while(r[i]!=0)
        {
            r[i]/=10;
            t++;
        }
        if(t%2==0)
        c++;
    }
    printf("%d",c);
    return 0;
}