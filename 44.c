#include <stdio.h>
int main ()
{
	int n,rem,rev=0, original;
	printf("Enter the number:");
	scanf("%d", &n);
	original=n;
	
	while (n!=0)
	{rem = n%10;
		rev = rev*10+rem;
		n/=10;
	}
if (original == rev)
printf("Not palindrome.");

else
printf("palindrome");

return 0;

}
