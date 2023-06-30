#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0,mc=0;
    for(int i=0;i<n;i++){
        if(a[i]!=1){
            c=0;
        }else{
            c++;
            if(mc<c){
                mc=c;
            }
        }
    }
    printf("%d",mc);
}