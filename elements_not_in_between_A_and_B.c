#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,a,b,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        count=a;
        a=b;
        b=count;
    }
    count=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            count=arr[i];
            printf("%d ",arr[i]);
        }
    }
    if(count==-1)
    {
        printf("%d",count);
    }
}
