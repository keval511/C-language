#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter the value a=");
	scanf("%d",&a);
	
	printf("enter the value b=");
	scanf("%d",&b);
	
		printf("addition for case=1 \n");
			printf("subtraction for case=2 \n");
				printf("multiplication for case=3 \n");
					printf("division for case=4 \n");
						printf("modulo for case=5 \n");
printf("enter the case c=");
	scanf("%d",&c);
	
	
			
	switch(c)
	{
	
	case 1:
	printf("%d \n",a+b);
	break;

case 2:
	printf("%d \n",a-b);
	break;
	
	case 3:
	printf("%d \n",a*b);
	break;
	
	case 4:
	printf("%d \n",a/b);
	break;
	
	case 5:
	printf("%d \n",a%b);
	
	break;		
	
	default:
		printf("wrongg");
		break;
	}
	
	
}

