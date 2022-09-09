#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    int e=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            e+=a[i];
        }
        
    }
   
    printf("%d",e);
}