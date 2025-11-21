#include<stdio.h>
int main()
{
	int i,x,y,z;
	printf("enter the number");
	scanf("%d%d",&x,&y);
	{
		printf("enter 1 for adition,2 for subtraction and 3 for multiplication");
		scanf("%d",&i);
	}
	switch(i)
	{
		case 1:
		z=x+y;
		break;
		case 2:
		z=x-y;
		break;
		case 3:
		z=x*y;
		break;
		deafult:
		printf("you have entered the incorrect option");
		break;
	}
	printf("the ans is %d",z);
}
