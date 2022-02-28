#include<stdio.h>
   int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i+=2)
{
    if(a[i]%2!=0)
        {
            printf("False");
            return 0;
        }
}
    printf("True");
    return 0;
}