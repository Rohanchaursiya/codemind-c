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
    for(i=1;i<n-1;i++){
        for(j=1;j<m-1;j++){
                sum+=a[i][j];
        }
    }
    printf("%d",sum);
}