#include<stdio.h>
int main()
{
	int i,n;
	int flag=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
			if(flag==1)
			printf("the number is  prime");
				else
				{
				
		printf("the number is not prime");
                }
						return 0;
}
