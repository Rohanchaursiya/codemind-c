#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,a,b,max=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            if(max<=arr[i])
            max=arr[i];
        }
    }
    if(max==-1)
    {
        printf("%d",max);
    }    
        else
    {
        printf("%d",max);
    }
    return 0;
}