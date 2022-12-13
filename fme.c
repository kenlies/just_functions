#include <stdio.h>

// algorithm for finding the majority element in a given array
// (Boyer-Moore majority vote algorithm)
// works only when majority element is present in array
// and take atleast half of the size of array

int fme(int array[], int n)
{
	int m;
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < n)
	{
		if (i == 0)
		{
			m = array[j];
			i = 1;
		}
		else
		{
			if (m == array[j])
				i++;
			else
				i--;
		}
		j++;
	}
	return m;
}
/*
int main()
{
	int array[] = {2, 9, 2, 2, 2, 5, 4, 2, 8, 2, 4, 6, 2, 8}; //size 14, 7 of 2s --> majority = 2
	int n = sizeof(array)/sizeof(array[0]);

	printf("The Majority element is: %d", fme(array, n));
}
*/