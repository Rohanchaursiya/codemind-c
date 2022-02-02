#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j,t=0;
    int count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==9)
       { printf("%d ",i);
          t++ ;
       }
       
    }
    printf("
Total=%d",t);
    return 0;
}