#include<stdio.h>
int main()
{
	int i,x,y,z;
	printf("enter two numbers");
	scanf("%d%d%d",&i,&x,&y);
	printf("enter 1 for adittion,2 for subtraction,3 for multiplication");
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
					deafault:
						printf("you have entered the incorrect option");
	}
	printf("the answer is %d,z");
	return 0;
}
