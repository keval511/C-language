#include<stdio.h>

int main()
{
//	int a=2;
//	printf("%d",a);
	
	int a[]={2,4,5,6,7,78,9};
	
	a[2]=10;
	
	printf("%d",a[2]);
	
	
	char n[]={'k','e','v','a','l'};
	
	n[0]='d';
	
//	printf("%c",n[0]);
	
	int i;
	for(i=0;i<=4;i++)
	{
		printf("%c",n[i]);
	}
	
}
