#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j || i+j==n-1){
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
}