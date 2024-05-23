#include<stdio.h>

int main()
{
	int pass,a,b;
	
	printf("enter the your password =");
	scanf("%d",&pass);
	
	printf("%d\n" ,pass);
	
	printf("please enter your password =\n");
	scanf("%d",&a);
	
	
	if(pass==a)
	{
		printf("valid password");
	}
	
	else
	{
		printf("re-enter your password=");
		scanf("%d",&a);
		if(pass==a)
	{
		printf("valid password");
	}
	else{
		printf("wrong password");
	}
		
	}
	
}
