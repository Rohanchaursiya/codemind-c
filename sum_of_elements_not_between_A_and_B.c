#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<a || arr[i]>b){
            sum+=arr[i];
        }
    }
    
    printf("%d",sum);
}