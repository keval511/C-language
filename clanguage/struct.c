#include<stdio.h>
#include<string.h>

struct mobile{
	char name[70];
	int price;
	int ram;
	int storage;
};

int main(){
	
	struct mobile m1;
	
	printf("enter the mobile name=");
	scanf("%s",&m1.name);
	printf("enter the mobile price=");
	scanf("%d",&m1.price);
	printf("enter the mobile RAM=");
	scanf("%d",&m1.ram);
	printf("enter the mobile storage=");
	scanf("%d",&m1.storage);
	
	
	printf("%s\n",m1.name);
	printf("%d\n",m1.price);
	printf("%d\n",m1.ram);
	printf("%d\n",m1.storage);	
	
	printf("\n");
	
	struct mobile m2;
	
	printf("enter the mobile name=");
	scanf("%s",&m2.name);
	printf("enter the mobile price=");
	scanf("%d",&m2.price);
	printf("enter the mobile RAM=");
	scanf("%d",&m2.ram);
	printf("enter the mobile storage=");
	scanf("%d",&m2.storage);
	
	printf("\n");
	
	printf("%s\n",m2.name);
	printf("%d\n",m2.price);
	printf("%d\n",m2.ram);
	printf("%d\n",m2.storage);	
	
	printf("\n");
	
	struct mobile m3;
	
	printf("enter the mobile name=");
	scanf("%s",&m3.name);
	printf("enter the mobile price=");
	scanf("%d",&m3.price);
	printf("enter the mobile RAM=");
	scanf("%d",&m3.ram);
	printf("enter the mobile storage=");
	scanf("%d",&m3.storage);
	
	
	printf("%s\n",m3.name);
	printf("%d\n",m3.price);
	printf("%d\n",m3.ram);
	printf("%d\n",m3.storage);	
	
	printf("\n");
	
	struct mobile m4;
	
	printf("enter mobile name=");
	scanf("%s\n",&m4.name);
	
	printf("enter your mobile pricce=");
	scanf("%d\n",m4.price);
	printf("enter your mobile RAM=");
	scanf("%d",&m4.ram);
	printf("enter your mobile storage=");
	scanf("%d",&m4.storage);
	
	printf("%s\n",m4.name);
	printf("%d\n",m4.price);
	
	printf("%d\n",m4.ram);
	printf("%d\n",m4.storage);
	
	struct mobile m5;
	
	printf("enter the mobile name=");
	scanf("%s",&m5.name);
	printf("enter the mobile picessss=");
	scanf("%d",&m5.price);
	printf("enter the mobile RAM=");
	scanf("%d",&m5.ram);
	printf("enter the mobile storage=");
	scanf("%d",&m5.storage);
	
	printf("%s\n",m5.name);
	printf("%d\n",m5.price);
	printf("%d\n",m5.ram);
	printf("%d\n",m5.storage);
	
}
