#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    int a=0,b=0,c=1;
    printf("0 1 ");
    while(i<n-2)
    {
        a=b+c;
        printf("%d ",a);
        b=c;
        c=a;
        i++;
    }
    return 0;
}