#include<stdio.h>
int main ()
{
    int Y;
    scanf("%d",&Y);
    if((Y%4==0)&&(Y%400==0||Y%100!=0))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}