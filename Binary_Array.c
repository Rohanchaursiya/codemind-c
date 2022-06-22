#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]!=0 && arr[i]!=1)
        {
            count=count+1;
        }
    }
    if(count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}