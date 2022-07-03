#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    for(i=2;i<ceil(sqrt(n))+1;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        b=a;
        c=a;
        while(1)
        {
            if(prime(b)==1)
            break;
            b--;
        }
        while(1)
        {
            if(prime(c)==1)
            break;
            c++;
        }
        if(abs(a-b)==abs(a-c))
        printf("%d
",b);
        else if(abs(a-b)>abs(a-c))
        printf("%d
",c);
        else
        printf("%d
",b);
    }
}