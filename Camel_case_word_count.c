#include<stdio.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,count=0;
    for(i=1;a[i]!=NULL;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        count++;
    }
    i++;
    printf("%d",count+1);
    return 0;
}