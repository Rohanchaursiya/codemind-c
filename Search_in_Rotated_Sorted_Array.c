#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int c=-1;
    for(int i=0;i<n;i++){
        if(k==a[i]){
            c=i;
            break;
        }
    }
    printf("%d",c);
    
}