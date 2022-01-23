#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(i==j || i+j==N+1)
            printf("x");
            else
            printf("0");
        }
        printf("
"); 
    }
}