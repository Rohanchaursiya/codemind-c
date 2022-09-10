#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[10000],t=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        t=t*10+a[i];
    }
    t++;
    int i=0;
    while(t){
        a[i]=t%10;
        t=t/10;
        i++;
    }
    i--;
    for(;i>=0;i--){
        printf("%d ",a[i]);
    }
}