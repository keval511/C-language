//1 9 10
//11 12 13
//14 15 16
//17 18 19

#include<stdio.h>
int main()
{
	int a,b,c=1;
	
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=3;b++)
		{
			if(a==1 && b==1 )
			{
				
				printf("\t%d",c);
				c=c+8;
				
			}
			else
			{
				printf("\t%d",c++);
			}
	}
	printf("\n");		
	
		
	}
	
	
}
