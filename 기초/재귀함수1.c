#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fact(int a) {
	if (a == 1 || a == 0) return 1;

	return a * Fact(a - 1);
}

int main() {
	int val;
	scanf("%d", &val);
	printf("%d", Fact(val));
}