#include<stdio.h>
int main()

{
	
	int i=1,j,k,l,m,n,o=1,p=5, q=2,r,s=2;
	
	while(i<=4)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		i++;
		printf("\n");
		
	}

	printf("\n");
	
	
		while(l<=4)
	{
		for(k=1;k<=l;k++)
		{
			printf("%d",l);
		}
		l++;
		printf("\n");
		
	}
	printf("\n");
	
	while(m<=4)
	{
		for(n=1;n<=m;n++)
		{
			printf("%d",o);
			o=o+1;
		}
		m++;
		printf("\n");
	}
	
	printf("\n");
	
		while(p>=1)
		{
			for(q=1;q<=p;q++)
			{
				printf("%d",p);
			}
			printf("\n");
			p--;
		}
		
		printf("\n");
		
		
		
		while(q<=8)
		{
			for(r=2;r<=q;r=r+2)
			{
				printf("%d",s);
				s=s+2;
			}
			q=q+2;
			printf("\n");
		}
		
		printf("\n");
		
	int t=1,u,v=1;
	
	while(t<=4)
	{
		for(u=1;u<=t;u++)
		{
			printf("%d",v);
			v=v+2;
		}
		t++;
		printf("\n");
		
	}
	
	printf("\n");
	
	int w=1,x,y=10;
	
	while(w<=4)
{
	for(x=1;x<=w;x++)
	{
		printf("%d",y);
		y=y-1;
	}
w++;
printf("\n");	
}	

printf("\n");

int a=1,b;

while(a<=5)
{
	for(b=5;b>=a;b--)
	{
		printf("%d",b);
	}
	a++;
	printf("\n");
}

printf("\n");

char c='a',d;

while(c<='d')

{
	for(d='a';d<=c;d++)
	{
		printf("%c",d);
	}
	c++;
	printf("\n");
}

printf("\n");

char e='a',f;

while(e<='d')
{
	for(f='d';f>=e;f--)
	{
		printf("%c",f);
	}
	e++;
	printf("\n");
}

printf("\n");

char g='d',h;

while(g<='d')
{
	for(h='a';h<=g;h++)
	{
		printf("%c",h);
	}
	g--;
	printf("\n");
}
}
