#include<stdio.h>
int main()
{
	int x,n,i,j;
	printf("enter valur of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\t");
	}
	return 0;
}
