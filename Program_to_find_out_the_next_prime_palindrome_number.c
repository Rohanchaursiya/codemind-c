#include <stdio.h>
int main()
{
    int num,rem,sum1=0,i,temp,sum2=0;
    scanf("%d", &num);
    num=num+1;
    while(1)
    {sum1=0;
        num++;
       temp=num;
        while (temp!=0)
        {
            rem=temp%10;
            sum1=rem+sum1*10;
            temp=temp/10;
        }
        if (num==sum1)
        {
            sum2=0;
            for (i=1;i<=num;i++)
            {
                if (num%i==0)
                    sum2++;
            }
            if (sum2==2)
            {
                printf("%d",num);
                return 0;
            }
        }
    }
    return 0;
}