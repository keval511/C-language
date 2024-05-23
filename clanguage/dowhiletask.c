#include<stdio.h>
int main()
{
	char b;
	char a='a';
	
	do{
	char c='a';
		for(b='a';b<='c';b++)
			
		{
	
			if(c<='b')
			{
				printf("%c",c);
				c++;
			}	
			else
			
			{
				c=c-2;
				printf("%c",c);
			}
		
		}
		a++;
		
		printf("\n");
	}while(a<='c');
}
