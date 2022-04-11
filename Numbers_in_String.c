#include<stdio.h>
int main()
{
    int i,j=0;
    char s[50];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
       if(s[i]>=48&&s[i]<=57)
       j=j+(s[i]-48);
    }
    printf("%d",j);
    return 0;
}