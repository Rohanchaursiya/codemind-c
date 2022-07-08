#include<stdio.h>
int main()
{
    int a,b,i;
    char s[1000];
    scanf("%[^
]s",s);
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    printf("%c",s[i]);
    return 0;
}