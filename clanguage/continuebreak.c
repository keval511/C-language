#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
					if(i==5||i==6) 
			{
				continue;
			}
		
			printf("%d ",j);
		
		}
		printf("\n");
	}
}




//
//1
//123
//1234
//1234567
