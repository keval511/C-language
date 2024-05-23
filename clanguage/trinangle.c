#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter the value of A = ");
	scanf("%d",&a);
	
	printf("enter the value of B = ");
	scanf("%d",&b);
	
	printf("enter the value of C = ");
	scanf("%d",&c);
	
	if(a==b && a==c )
	{
		
		printf("triangle");
	}
	else
	{
		printf("not trinangle");
	}
	
}
