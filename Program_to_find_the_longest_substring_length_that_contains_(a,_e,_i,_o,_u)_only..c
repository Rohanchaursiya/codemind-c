#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,k=0,m=0,n=0;
    scanf("%[^
]s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        b[k]=a[i];
        else
        b[k]=' ';
        k++;
    }
    for(i=0;i<strlen(b);i++){
        if(b[i]==' '){
        m=0;
        }
        else{
        m++;
        if(n<=m)
        n=m;
        }
    }
    printf("%d",n);
    return 0;
}