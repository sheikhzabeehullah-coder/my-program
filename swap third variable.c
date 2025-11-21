#include<stdio.h>
int main()
{
	int x,y;
	//input the two numbers;
	printf("enter the two numbers,x,y");
	scanf("%d%d",&x,&y);
	printf("numbers before swapping are %d%d",x,y);
	//swapping;
	x==x+y;
	y==x-y;
	x==x-y;
	printf("numbers after swapping are%d%d",y,x);
	return 0;
}
