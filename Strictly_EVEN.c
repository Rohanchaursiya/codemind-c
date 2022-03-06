#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,k,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            c++;
            a[i]=0;
        }
    }
    for(i=0,k=0;i<n,k<c;i=i+2,k++){
        if(a[i+1]==0){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}