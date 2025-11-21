#include<stdio.h>
int main()
{
	int n,i,q,r;
	printf("enter the number");
	scanf("%d",&n);
	q=n;
	while(q>0)
	{
		r=n%10;
		printf("%d",r);
		q=n/10;
	}
}
