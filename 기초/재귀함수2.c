#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int a) {
	if (a == 0) return 0;
	if (a == 1) return 1;
	if (a == 2) return 1;

	return fibo(a - 1) + fibo(a - 2);
}

int main() {
	int a;
	scanf("%d", &a);
	fibo(a);
	printf("%d", fibo(a));
}

