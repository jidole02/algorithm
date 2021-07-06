#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int factorial(int n)
{
	if (n == 1)
		return 1;

	return n * factorial(n - 1);
}

int nCr(int y, int x) {
	return factorial(x) / (factorial(y - x) * factorial(x));
}

int main() {
	int test_num = 0;
	int x, y = 0;
	//scanf("%d", &test_num);
	scanf("%d %d", &x, &y);
	printf("\n%d", comb(y, x));
}