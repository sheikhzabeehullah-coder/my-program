#include<stdio.h>
int main()
{
	int i,n,a,b,c;
	printf("enter the number of terms to be displayed");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d%d",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
			}
			return 0;

}
