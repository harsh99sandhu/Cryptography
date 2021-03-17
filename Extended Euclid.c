/* 
   HARSHPREET SINGH SANDHU
   R134218065
*/ 
 
#include <stdio.h>

int extended_gcd(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1;
	int gcd = extended_gcd(b % a, a, &x1, &y1);

	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

int main()
{
	int a = 13;
	int b = 11;
	
	printf("First number a: %d\n",a);
	printf("Second number b: %d\n",b);

	int x, y;

	printf("GCD is %d\n", extended_gcd(a, b, &x, &y));
	printf("x = %d, y = %d", x, y);

	return 0;
}
