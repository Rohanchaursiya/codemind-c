#include<stdio.h>
int main()
 {
    int N,i,j;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
	{
        for(j=1;j<=N;j++)
		{
            if(i==j||i+j==N+1)
            {
             printf("%d ",i);
            }
           else
           {
		     printf(" ");
		   }
        }
	  printf("
");
   }
   return 0;
 }