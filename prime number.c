#include<stdio.h>
int main()
{
    int num,i=2,d;
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
            d=1;
        }
        i++;
    }
    if(d==1)
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }
    return 0;
    
}