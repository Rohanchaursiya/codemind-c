#include<stdio.h>
int main()
{
    int n,a[100],b;
    scanf("%d",&n);
    int i,j,m=0;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
        if(m<a[i])
        m=a[i];
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]+b>=m)
        printf("True ");
        else
        printf("False ");
    }
}