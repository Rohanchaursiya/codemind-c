#include<stdio.h>
#include<string.h>
int main()
{
   int n,k=0,i;
   char s[100];
   scanf("%d",&n);
   while(n--)
   {k=0;
        scanf(" %[^
]s",s);
        for(i=0;s[i]!=NULL;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {k=1;
            break;}
        }
        if(k==0)
        printf("No
");
        else
        printf("Yes
");
   }return 0;
}