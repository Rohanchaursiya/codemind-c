#include<stdio.h>
int main()
{
    int i,j,n,arr[100],c=0,s=0;
    float avg,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            s=s+arr[i];
            arr[i]=0;
            f=f+1;
        }
    }
    avg=float(s/f);
     if(f==0)
    {
        printf("-1");
    }
    else
    printf("%.2f",avg);
}