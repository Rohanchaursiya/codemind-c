#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int xs=0,ys=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2!=0){
            xs+=arr[i];
        }
        else{
            ys+=arr[i];
        }
    }
    if((xs-ys)%4==0){
        printf("X");
    }
    else{
        printf("Y");
    }
}