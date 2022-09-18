#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b;
    int c=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        if(arr[i]>=a && arr[i]<=b){
            printf("%d ",arr[i]);
            c+=1;
        }
    }
    if(c==0){
        printf("-1");
    }
}