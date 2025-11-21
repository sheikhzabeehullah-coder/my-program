#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of items you wish to display in the series");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	return 0;
}
