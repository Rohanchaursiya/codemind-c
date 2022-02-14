    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int i=0,j=0,t=0;
        char a[10];
        scanf("%[^
]s",a);
        for(j=0;j<strlen(a);j++)
        {
            for(i=0;i<strlen(a);i++)
            {
                if(a[i]==a[j])
                t++;
            }
        }
        if(t>strlen(a))
        printf("Not Unique Number");
        else
        printf("Unique Number");
        return 0;
    }