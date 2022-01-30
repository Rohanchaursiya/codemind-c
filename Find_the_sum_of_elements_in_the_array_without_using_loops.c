#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>30)
    {
        printf("Enter a Valid Number");
    }
    int a[n],i,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        j=j+a[i];
    }
    printf("%d",j);
    return 0;
}