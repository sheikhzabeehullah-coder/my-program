#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter valur of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\t");
	}
	return 0;
}
