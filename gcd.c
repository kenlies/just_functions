#include <stdio.h>

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