#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    scanf("%f",&a);
    int i=0,t=0;
    while(t<a)
    {i+=1;
        t=pow(2,i);
        if(t==a)
        {
            printf("0");
            return 0;
        }
    }
    i-=1;
    if(abs(t-a)>abs(pow(2,i)-a))
    printf("%.0f",abs(pow(2,i)-a));
    else
    printf("%.0f",abs(t-a));
}