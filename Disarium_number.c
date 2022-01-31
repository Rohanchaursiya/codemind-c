#include<stdio.h>
#include<math.h>
int main()
{
    int a,n=0,t,i,j=0,u;
    scanf("%d",&a);
    t=a;
    u=a;
    while(a!=0)
    {
        a=a/10;
        j++;
    }
    while(t!=0)
    {
        i=t%10;
        n=pow(i,j)+n;
        t=t/10;
        j--;
    }
    if(u==n)
    printf("True");
    else
    printf("False");
    return 0;
}