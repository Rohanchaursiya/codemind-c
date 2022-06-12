#include<stdio.h>
int main()
{
    int a,b,i,k=0,d,n;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        k=0;
        while(n)
        {
          d=n%10;
          if(d==0)
          {
              k=0;
              break;
          }
          if(i%d==0)
          {
              k=1;
          }
          else
          {
              k=0;
              break;
          }
          n=n/10;
        }
        if(k==1)
    {
        printf("%d ",i);
    }
    }
    
}