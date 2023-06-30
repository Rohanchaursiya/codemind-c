#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int q;
    scanf("%d",&q);
    int c=0;
    for(int i=0;i<n;i++){
        if(q>=a[i] && q<=b[i]){
            c++;
        }
    }
    printf("%d",c);
}