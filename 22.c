#include<stdio.h>
#include<math.h>
int main()
{
	long int i,n,x;
	x=2;
	printf("Enter the no. of terms ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{		
		printf("%d ",x);
		x=x*x;
	
	}
	
}
