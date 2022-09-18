#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            sum+=arr[i];
        }
        else{
            break;
        }
    }
    printf("%d",sum);
}