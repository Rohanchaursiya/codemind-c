#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,bin=0,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        bin=bin+arr[i]*pow(2,j);
        j++;
    }
    printf("%d",bin);
    return 0;
}