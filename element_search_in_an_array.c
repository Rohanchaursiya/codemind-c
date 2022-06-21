#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,item;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(item==arr[i])
        {
            printf("True");
            return 0;
        }
        
    }
    printf("False");
        
    
}