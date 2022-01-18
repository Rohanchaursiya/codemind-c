#include<stdio.h>
int main ()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    printf("%d",(((l+2*w)*(b+2*w))-(l*b))*c);
    return 0;
}