#include<stdio.h>
int main()
{
    int i;
    char s[50],t;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
       if(s[i]>t)
       t=s[i];
    }
    printf("%c",t);
    return 0;
}