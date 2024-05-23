#include<stdio.h>
int main()
{
	FILE *pqr;
	int a=10,b;
	
	pqr = fopen("taskkk.txt","w");
	
	if(a>=0)
	{
		fprintf(pqr,"number is positive");
	}
	else
	{
		fprintf(pqr,"negativvee");
	}
	
	
	fclose(pqr);
	
	
}
