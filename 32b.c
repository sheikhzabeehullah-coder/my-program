#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the pattern");
	scanf("%d",&i);
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	return 0;
}
