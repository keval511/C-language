#include<stdio.h>

void sum(){
	int a,b;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("%d\n",a+b);
}

void marksheet(char name[],int rollNo,int maths,int science,int english)
{
printf("%s\n",name);
printf("%d\n",rollNo);
printf("%d\n",maths);
printf("%d\n",science);
printf("%d\n",english);
}

int add(int a,int b)
{
	return a+b;
}
int sub(int c,int d)
{
	return c-d;
}
int mul(int e,int f)
{
	return e*f;
}
int modulo(int g , int h)
{
	return g%h;
}
int div(int i,int j)
{
	return i/j;
}

int main(){
	
	sum();
	int wt,aa,b,c,d,e,f,g,h,i,j;
	printf("enter the value of aa");
	scanf("%d",&aa);
	
	
	
	if(aa==1)
	{
		printf("%d",add(50,20));
	}
	
	else if(aa==2)
	{
		
		printf("%d",sub(50,30));
	}
	else if(aa==3)
	{
		
		printf("%d",mul(20,30));
	}
	else if(aa==4)
	{
		
		printf("%d",modulo(20,30));
	}
	else if(aa==5)
	{
	
		printf("%d",div(20,30));
	}
	else{
		printf("\nerror");
	}
	marksheet("keval",6511,89,88,90);
}


