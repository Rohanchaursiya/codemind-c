#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int i,v=0,c=0,d=0,sp=0;
    scanf("%[^
]s",n);
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]==' ')
        sp++;
        else if(n[i]=='a'||n[i]=='A'||n[i]=='e'||n[i]=='E'||n[i]=='i'||n[i]=='I'||n[i]=='o'||n[i]=='O'||n[i]=='u'||n[i]=='U')
        v++;
        else if(48<=n[i]&&n[i]<=57)
        d++;
        else
        c++;
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,sp);
    return 0;
}