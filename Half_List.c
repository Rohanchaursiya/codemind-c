#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n/2];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n/2;i++)
    b[i]=a[i];
    for(i=0;i<n/2;i++)
    a[i]=a[n-1-i];
    for(i=0;i<n/2;i++)
    a[i+n/2]=b[i];
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}