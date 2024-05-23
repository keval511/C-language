#include<stdio.h>
int main()
{
	int i=1,k,l=0;
	scanf("%d",&k);
	while(i<=k)
	{
		if(i%2==1)
		{
			printf("%d",i);
			
		}
		l=l+1;
		i++;
		printf("\n");
	}
	printf("%d",l);
	
}
