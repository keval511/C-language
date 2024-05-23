#include<stdio.h>

int main()
{
	int i,j,k=0,l=11,m=1,p=2;
	
	char x,y,q,r;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=k+1;
			printf("%d",k);
		}
		printf("\n");
	}
	
 printf("\n");
 
 
 for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			l=l-1;
			printf("%d",l);
		}
		printf("\n");
	}

for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			
			printf("%d",m);
			m=m+2;
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			
			printf("%d",p);
			p=p+2;
			
		}
		printf("\n");
	}		
	
	printf("\n");
	for(x='a';x<='c';x++)
	{
	char z='b';
		for(y='a';y<='c';y++)
		{
			
			if(y<='b')
			{
				printf("%c",z);
				z++;
			}
		else
		
		{
			
			printf("%c",z=z-3);
		}
			
		}
		printf("\n");
	}	
	
	printf("\n");
		
		
		for(q='a';q<='c';q++)
		{
		char n='a';
			for(r='a';r<='c';r++)
			{
				if(r<='b')
				{
					printf("%c",n);
					n++;
				}
				else
				{	
				n=n-2;
					printf("%c",n);
					printf("\n");
				}
				
			}
		}
}
