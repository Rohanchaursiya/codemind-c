#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,M;
    scanf("%d%d%d",&x,&y,&M);
    int P;
    P=pow(x,y);
    printf("%d",P%M);
    return 0;
}