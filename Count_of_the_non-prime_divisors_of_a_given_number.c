#include<stdio.h>
int main()
{
    int a,i,j,n;
    int t=0,l,k=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {l=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                l++;
            }
            if(l==2)
            {t++;}
            k++;
        }
    }
    printf("%d",k-t);
    return 0;
}