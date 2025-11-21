#include <stdio.h>
int main() 
{
  int a, b;
  printf("Enter first number");
  scanf("%d", &a);
  printf("Enter second number");
  scanf("%d", &b);
  if (a > b)
    printf("%d is greater", a);
  else if (a < b)
    printf("%d is greater", b);
  else
    printf("Both are equal");
  return 0;
}
