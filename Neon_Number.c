#include<stdio.h>
int main(){
    int n,temp,rem=0,sum=0;
    scanf("%d",&n);
    temp=n*n;
    while(temp!=0){
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    if(sum==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}