#include<stdio.h>
int main()
{
	int i=1,j;
	
	
	while(i<=4)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		i++;
		printf("\n");
	}
}
