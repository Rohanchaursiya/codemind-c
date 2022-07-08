#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,k=0;
    char s[1000],ch;
    scanf("%[^
]s",s);
    fflush(stdin);
    scanf(" %c",&ch);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==ch)
        k++;
    }
    if(k==0)
    printf("-1");
    else
    printf("%d",k);
    return 0;
}