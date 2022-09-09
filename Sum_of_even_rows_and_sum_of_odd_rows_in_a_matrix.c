#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int e=0,o=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                if(i%2==0){
                    e+=a[i][j];
                }
                else{
                    o+=a[i][j];
                }
        }
    }
    printf("%d %d",e,o);
    return 0;
}