#include<stdio.h>
int main()
{
	int a[3][3]={{1,9,8},{3,5,7},{6,4,2} },i,j;
	
	printf("%d",a[0][0]);
	printf("%d",a[2][2]);
	printf("%d",a[1][0]);
	printf("%d",a[2][1]);
		printf("%d",a[1][1]);
			printf("%d",a[2][0]);
				printf("%d",a[1][2]);
					printf("%d",a[0][2]);
						printf("%d",a[0][1]);
						printf("\n");
char b[4][3]={{'h','i','c'},{'u','t','b'},{'e','g','p'},{'a','r','n'}};
	printf("%c",b[0][0]);
printf("%c",b[0][1]);
printf("%c",b[1][1]);
printf("%c",b[2][0]);
printf("%c",b[0][2]);
printf("%c",b[0][0]);
printf("%c",b[1][2]);
printf("%c",b[3][0]);	
printf("%c",b[2][2]);
printf("%c",b[1][0]);
printf("%c",b[3][2]);
printf("%c",b[3][0]);
printf("%c",b[2][1]);
printf("%c",b[3][0]);
printf("%c",b[3][1]);	

printf("\n");

for(i=0;i<=2;i++){
	for(j=0;j<=2;j++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
}					
}
