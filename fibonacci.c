#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("%d %d ",a,b);
	c=a+b;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		printf("%d ",c);
		a=b,
		b=c,
		c=a+b;
	}	
}