#include<stdio.h>
int main()
{
    int num,sum=1,temp,s=0,r;
    scanf("%d",&num);
    while(0<num){
        r=num%10;
        temp=sum*r;
        sum=temp;
        s=s+r;
        num=num/10;
    }
    
    printf("%d",sum-s);
}