#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the two numbers \n");
	scanf("%d%d",&x,&y);
	printf("numbers before swapping are %d and %d \n",x,y);
	swap(x,y);
	//printf("%d%d",x,y);
}
	
	void swap(int x,int y)
	{
		int temp;
		temp=x;
		x=y;
		y=temp;
		printf("the numbers after swapping are %d and %d",x,y);
	}
