#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter the elements");
	scanf("%d",&n);
		for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
		{
		printf("%d\t",a[i]);
	}
	return 0;
}
