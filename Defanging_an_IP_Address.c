#include<stdio.h>
int main()
{
    char s[20],b[100];
    int i,k=0;
    scanf("%[^
]s",s);
    for (i=0;s[i]!=NULL;i++)
    {
        if (s[i]=='.')
        {
            b[k++]='[';
            b[k++]='.';
            b[k++]=']';
        }
        else
        b[k++]=s[i];
    }
    b[k]=NULL;
    for(i=0;b[i]!=NULL;i++)
    printf("%c",b[i]);
    return 0;
}