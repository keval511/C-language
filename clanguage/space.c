#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m=1,n,o,p;
	
	for(a=4;a>=1;a--)
	{
		for(b=4;b>=a;b--)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" %d",c);
		}
		printf("\n");
	}
	printf("\n");
	
	
	for(d=1;d<=4;d++)
	{
		for(e=4;e>=d;e--)
		{
			printf(" ");
		}
		for(f=1;f<=d;f++)
		{
			printf("%d ",f);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(g=1;g<=4;g++)
	{
		for(h=4;h>=g;h--)
		{
			printf(" ");
		}
		for(i=1;i<=g;i++)
		{
			printf("%d ",g);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(j=1;j<=4;j++)
	{
		for(k=4;k>=j;k--)
		{
			printf(" ");
		}
		for(l=1;l<=j;l++)
		{
			printf("%d ",m);
			m=m+1;
		}
		
		printf("\n");
	}
	printf("\n");
	
	for(n=1;n<=4;n++)
	{
		for(o=4;o>=n;o--)
		{
			printf(" ");
		}
		for(p=1;p<=n;p++)
		{
			printf("1 ");
		}
		printf("\n");
	}
}
