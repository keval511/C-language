#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="hello";
	char str2[]="world";
	char str3[]="helllooo world";
	char str4[20];
	strcat(str1,str2);
	printf("%s",str1);
	
	printf("\n");
	
	strcpy(str4,str3);
	printf("%s",str4);
}
