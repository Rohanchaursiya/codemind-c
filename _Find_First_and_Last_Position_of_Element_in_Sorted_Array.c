#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int q;
    scanf("%d",&q);
    int f=-1,l=-1;
    for(int i=0;i<n;i++){
        if(q==a[i] ){
            f=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(q==a[i] ){
            l=i;
            break;
        }
    }
    printf("%d %d",f,l);
}