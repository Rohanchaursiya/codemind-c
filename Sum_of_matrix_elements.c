#include<stdio.h>
int main()
{
	int M,N;
	scanf("%d%d",&M,&N);
    int mat[M][N], i, j, sum;
    sum = 0;
   
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}