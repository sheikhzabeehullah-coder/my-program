#include<stdio.h>
int main()
{
	int x,y,max;
	printf("Enter two integers ");
	scanf("%d%d", &x, &y);
	
	x>y?printf("%d is larger", x):printf("%d is larger", y);
	return 0;
}
