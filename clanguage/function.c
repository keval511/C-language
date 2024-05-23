#include<stdio.h>

void movie(){
	printf("\n\npushpa 2");
}

void store(){
	char product[50];
	int price;
	
	scanf("%s",&product);
	scanf("%d",&price);
	
	printf("\nproduct name = %s",product);
	printf("\nproduct price = %d",price);
}


int main(){
	
	store();
	movie();
	movie();
	movie();
	movie();
	
}
