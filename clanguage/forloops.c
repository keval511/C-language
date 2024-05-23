//1
//12
//123
//1234

//1
//23
//456
//78910

2
46
81012
14161820

#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
