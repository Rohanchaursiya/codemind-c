#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg;
    avg=sum/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=avg){
            count++;
        }
    }
    printf("%d",count);
    
}