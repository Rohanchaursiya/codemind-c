#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    k=n/2;
    int sum1=0;
    for(int i=0;i<k;i++){
            sum1+=arr[i];
    }
    int sum2=0;
    for(int i=k;i<n;i++){
            sum2+=arr[i];
    }
    printf("%d
%d",sum1,sum2);
}