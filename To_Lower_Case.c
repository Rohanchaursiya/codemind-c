#include<stdio.h>
int main()
{
    char s[100],t[100];
    int i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(65<=s[i]&&s[i]<=90)
        {
            t[i]=s[i]+32;
            printf("%c",t[i]);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}