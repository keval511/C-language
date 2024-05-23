#include<stdio.h>

int main()

{
	
	int a,b;
	
	printf("enter the value of A=");
	scanf("%d",&a);
	
		printf("enter the value of B=");
	scanf("%d",&b);
	
	if(a>=18)
	{
		printf("you are eligable for voting\n");
		
	}
	
	else
	{
		printf("you are not eligable for voting\n");
	}
	
		if(b>=a)
	{
		printf("%d",b);
		
	}	
	
	else
	{
		printf("%d",a);
		
	}
	
}
