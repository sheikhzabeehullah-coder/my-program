#include<stdio.h>
float main()
{
	float x;
	printf("enter a number ");
	scanf("%f",&x);
	if(x<0)
	{
		printf("%f is a negative number",x);
	}
	if(x>0)
	{
		printf("%f is a positive number",x);
	}
	return 0;
}


