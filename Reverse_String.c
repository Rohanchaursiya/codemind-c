#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, len;
  	scanf("%[^
]s",str);
  	
  	len = strlen(str);
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ')
		{
			str[i] = NULL;
			printf("%s ", &(str[i]) + 1);	
		} 
	}
	printf("%s", str);
	
  	return 0;
}