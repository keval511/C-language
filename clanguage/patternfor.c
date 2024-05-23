#include<stdio.h>

int main()
{
	int i,j,k=1,l=0,m;
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		
		{
			if(m%2==0)
			{
			
				printf("%d",k);
			}
			else
			{
				printf("%d",l);
			}
			
			m++;
		}
		printf("\n");
	}
}
