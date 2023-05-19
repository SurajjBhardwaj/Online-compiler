// Iterative C program to count number of
// digits in a number
#include <stdio.h>

int countDigit(long long n)
{
	if (n == 0)
		return 1;
	int count = 0;
	while (n != 0) {
		n = n / 10;
		++count;
	}
	return count;
}

// Driver code
int main(void)
{
	long long n = 345289467;
	printf("Number of digits : %d", countDigit(n));
	return 0;
}
