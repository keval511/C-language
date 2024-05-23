#include<stdio.h>

void flipkart(){
	
	char name[50];
	int price;
	printf("enter the products name what you want=");
	scanf("%s",&name);
	
	printf("product prize is=");
	scanf("%d",&price);
	
	printf("%s\n",name);
	printf("%d",price);
}

int main(){
	flipkart();
} 
