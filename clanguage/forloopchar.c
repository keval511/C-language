#include<stdio.h>
int main()
{
	char a,b,c='a';
	
	for(a='a';a<='e';a++)
	{
		for(b='a';b<='c';b++)
		{
			
			printf("%c",c);
			c++;
			
			if(a==b)
		{
			c=c+1;
		
		}	
		
		}
		printf("\n");
		
	
	}
}
