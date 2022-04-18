#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(s!=1&&s!=4)
    {
      s=0;
      while(n!=0)
       {
         r=n%10;
         s=s+(r*r);
         n=n/10;
       }
       n=s;
    }
    if(s==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}