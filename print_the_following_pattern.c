#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(j==1||i==j||i==N)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("
");
    }
}