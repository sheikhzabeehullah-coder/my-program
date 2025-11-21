#include<stdio.h>
#include<math.h>
float main()
{
	float a,b,c,r1,r2,d;
	printf("enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d==b*b-4*a*c;
	if(d>0)
	{
		r1==-b+sqrt(d)/2*a;
		r2==-b-sqrt(d)/2*a;
		printf("the equation has two real roots==%f%f",r1,r2);
}
	if(d==0)
	{
		r1==-b/2*a;
		printf("the equation has only one root==%f",r1);
}
	if(d<0)
	{
		printf("the equation has imaginary roots");
	}
return 0;
}

