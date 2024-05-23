#include<stdio.h>

int main()
{
	int i,j,k,l,m=10,n,o,p=2,q,r,s=1,v,w,x,y;
	char t,u;
	
	for(i=4;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
	
	printf("\n");
	
		for(k=10;k>=7;k--)
	{
		for(l=10;l>=k;l--)
		{
			
			printf("%d",m);
			m--;
			
		}
		printf("\n");
	}
	
	printf("\n");
	
		for(k=1;k<=4;k++)
	{
		for(l=1;l<=k;l++)
		{
			
			printf("%d",p);
			p=p+2;
			
		}
		printf("\n");
	}
	
	printf("\n");
	
		for(q=1;q<=4;q++)
	{
		for(r=1;r<=q;r++)
		{
			
			printf("%d",s);
			s=s+2;
			
		}
		printf("\n");
	}
	
	printf("\n");


for(t='d';t>='a';t--)
{

for(u='d';u>=t;u--)

{
	printf("%c",u);
}
printf("\n");
}	

printf("\n");

for(v=1;v<=4;v++)
{

for(w=v;w>=1;w--)

{
	printf("%d",w);
}
printf("\n");
}

printf("\n");


printf("enter the value of X=");
scanf("%d",&x);

printf("enter the value of y=");
scanf("%d",&y);

for(;x<=y;)
{
	
	if(x%2==0)
	{
		
		printf("%d",x);
	}
	x++;
}
}
