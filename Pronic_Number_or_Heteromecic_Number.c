#include<stdio.h>
int main()
{
    int n,i=0,c=0;
    scanf("%d",&n);
    while(1)
    {
        if(c==n)
        {
            printf("YES");
            break;
        }
        else if(c>n)
        {
            printf("NO");
            break;
        }
        c=i*(i+1);
        i++;
    }
}