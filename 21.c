#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x;
	printf("Enter the no. of terms youi want to be displayed: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=pow(2,i);
		printf("%d ",x);
	}
}
