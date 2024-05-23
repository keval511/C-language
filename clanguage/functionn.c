#include<stdio.h>

void cake(int price,char name[],float rating,double weight){
	printf("price of cake = %d\n",price);
		printf("name of cake = %s\n",name);
			printf("rating of cake = %f\n",rating);
				printf("weight of cake = %lf\n",weight);
				
			}
void marksheet(char names[100],int rollno,int maths,int science,int english)
{
	printf("name of students %s\n",names);
	printf("students roll number %d\n",rollno);
	printf("student maths marks %d\n",maths);
	printf("student science marks %d\n",science);
	printf("student english marks %d\n",english);
	
	
	
int	ans;
ans=maths+science+english;

printf("%d\n",ans/3);

	
	if(33<=maths && 33<=science && 33<=english)
	{
		printf("pass");
	}
	else{
		printf("fail");
	}
	printf("\n");
	

}


void con(int a,int b)
{
	
	
	if(a>=b){
		printf("\nyou are eligable for voting");
	}
	else{
		printf("\nnot eligable");
	}
}

int main()
{
	cake(500,"black forest",4.9,500);
	con(18,11);
	con(12,20);
	
	marksheet("keval",6511,88,99,80);
	marksheet("ridham",6531,86,100,90);
	marksheet("lakshya",6521,88,88,80);
	marksheet("jenil",6578,88,99,80);
}



//marksheet(roll,name,maths,sci,eng)
