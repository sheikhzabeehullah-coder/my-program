#include<stdio.h>
int add(int,int);

int main()
{
	int a,b,c;
	printf("enter two integers \n");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("the sum is %d",c);
	
}

     int add(int a, int b)
     {
     	int z;
     	z=a+b;
     	return z;
     }
