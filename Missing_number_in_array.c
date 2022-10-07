#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int sum=0;
        for(int i=1;i<=n-1;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        printf("%d
",(n*(n+1)/2)-sum);
    }
    return 0;
}