#include<stdio.h>
int main()
{
	int n,i;
	long long int x,sum;
	sum=0;
	printf("enter the number of terms");
	scanf("%d",&n);
	x=2;
	for(i=1;i<=n;i++)
	{
		sum=sum+x;
		x=x*x;
			}
			printf("the sum of terms of the series=%d",sum);
			return 0;
}
