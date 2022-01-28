#include<stdio.h>
int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    for (  i = N; i >=1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= N; k++)
        {
            if(k==1||k==N||i==1||i==N)
            printf("*");
            else
            printf(" ");
        }       
        printf("
");
    }
}