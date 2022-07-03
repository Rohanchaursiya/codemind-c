#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d=0,b=0,i;
    int k=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        d+=(n%10)*pow(8,k++);
        n/=10;
    }
    i=1;
    while(d!=0)
    {
        b+=(d%2)*i;
        d/=2;
        i*=10;
    }
    printf("%lld",b);
    return 0;
}