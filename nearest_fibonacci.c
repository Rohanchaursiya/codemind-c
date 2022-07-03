#include<stdio.h>
#include<math.h>
void fib(int n)
{
    int a=0,b=1,c=0;
    if (n==0)
    return ;
    while(n>=c)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(abs(c-n)>abs(b-n))
    printf("%d",b);
    else if(abs(c-n)==abs(b-n))
    printf("%d %d",b,c);
    else
    printf("%d",c);
}

int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
    return 0;
}