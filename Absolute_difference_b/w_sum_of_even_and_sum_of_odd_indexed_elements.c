#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    int o=0,e=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            e+=a[i];
        }
        else{
            o+=a[i];
        }
    }
    int d;
    d=e-o;
    printf("%d",d);
}