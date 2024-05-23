#include<stdio.h>
#include<string.h>

struct car{
	char name[50];
	int price;
	char color[50];
	int stock;
	
};
int main()
{
	char name[50];
	int price;
	char color[50];
	int stock;
	int i;
	
	struct car c[50];
	for(i=0;i<=1;i++)
	{
		printf("enter the car name :-");
		scanf("%s",&name);
		printf("enter the car price :-");
		scanf("%d",&price);
		printf("enter the car color :-");
		scanf("%s",&color);
		printf("enter the car stock :-");
		scanf("%d",&stock);
		
		strcpy(c[i].name,name);
		c[i].price=price;
		c[i].color[88]=color;
		c[i].stock=stock;
		
	}
	
	for(i=0;i<=1;i++)
	{
		printf("%d\n",c[i].name);
		printf("%d\n",c[i].price);
		printf("%s\n",c[i].color);
		printf("%d\n",c[i].stock);
	}
	
	
}
