#include<stdio.h>
int main()
{
	int i=1,num,x,y;
	scanf("%d",&num);
	while(i<=num)
	{
		scanf("%d %d",&x,&y);
		printf("%d
",x+y);
	i++;
	}
}