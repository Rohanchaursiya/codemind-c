#include<stdio.h>
int main()
{
    int l,b,w,c,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(2*w<l&&2*w<b){
    t=(l-(2*w))*(b-(2*w));
    if(t>=0)
    printf("%d",(l*b-t)*c);
    else
    printf("Impossible");
    }
    else
    printf("Impossible");
    return 0;
}