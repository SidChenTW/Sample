// Sample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <inttypes.h>

uint64_t fib(uint64_t n)
{
#if 1
	return (n == 0) || (n == 1) ? 1 : fib(n - 1) + fib(n - 2);
#else
	uint64_t fn1 = 1, fn2 = 1, sum = 0;
	uint64_t Index = 2;
	if (n == 0 || n == 1) return 1;

	for (Index = 2; Index <= n; Index++)
	{
		sum = fn1 + fn2;
		fn1 = fn2;
		fn2 = sum;
	}
	return fn2;
#endif
}

int main(int argc, char* argv[])
{
	uint64_t Index;
	for (Index = 0; Index < 50; Index++)
		printf("%llu %llu\n", Index, fib(Index));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
