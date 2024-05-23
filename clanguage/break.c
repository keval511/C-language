#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==3)
			{
				continue;
			}
		printf("%d",j);
		}
		printf("\n");
	}
	printf("\n");
	
	for(j=1;j<=4;j++)
	{
		for(k=4;k>=j;k--)
		{
			if(j==2 || j==3)
			{
				continue;
			}
			printf("%d",k);
		}
		printf("\n");
	}
}




