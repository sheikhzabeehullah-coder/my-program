#include<stdio.h>
int main()
{
	int n,i,product;
	printf("enter the number of items");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		product=product*i;
		
	}
	printf("the product is %d",product);
return 0;	
}
