#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int hanoi(int num, int from, int by, int to) {
	if (num == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		hanoi(num - 1, from, to, by);
		printf("%d %d\n", from, to);
		hanoi(num - 1, by, from, to);
	}
}

int main() {
	int a;
	int k;
	scanf("%d",&a);
	k = pow(2, a) - 1;
	printf("%d\n",k);
	hanoi(a, 1, 2, 3);
}