#include<stdio.h>
int main()
{
    int m,n,i=0,rem,even=0,odd=0;
    scanf("%d",&m);
    n=m;
    while(m>0)
    {
        rem=m%10;
        m=m/10;
        i++;
    }
    while(n>0)
    {
        rem=n%10;
        if(rem%2==0)
        {
        even++;
        }
        else
        {
        odd++;
        }
        n=n/10;
    }
    if(i==even)
    printf("Even");
    else if(i==odd)
    printf("Odd");
    else
    printf("Mixed");
    return 0;
}