#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            count+=1;
        }
    }
    for(int i=0;i<count;i++){
        printf("%d ",0);
    }
    for(int i=count;i<n;i++){
        printf("%d ",1);
    }
    return 0;
}