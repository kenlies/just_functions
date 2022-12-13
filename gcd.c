#include <stdio.h>

// algorithm for finding the highest common divisor (Euclid's algorithm)

// using iterative substraction
int	gcd(int a, int b)
{
	if (!a || !b)
		return 0;

	while (b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

// using recursive substraction
int	gcd(int a, int b)
{
	if (b == 0)
		return a;
	else if (a > b)
		return gcd(a - b, b);
	else
		return gcd(a, b - a);
}
/*
int main ()
{
	int a;
	int b;

	printf("Please provide number 1 : ");
	scanf("%d", &a);
	printf("Please provide number 2 : ");
	scanf("%d", &b);
	
	printf("Highest common divisor = %d", gcd(a, b));

	return 0;	
}
*/