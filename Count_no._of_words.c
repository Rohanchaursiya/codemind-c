#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",&str);
    int i,count=1;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
        count=count+1;
        }
    }
    i++;
    printf("%d",count);
    return 0;
}