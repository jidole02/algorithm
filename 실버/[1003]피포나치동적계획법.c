#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#define _ 41

int arr[_];
int zero[_] = {0};
int one[_] = {0};
int res[_] = { 0 };

int fib(int n) {
	if (n == 0) {
		zero[n]++;
		return 0;
	};
	if (n == 1) {
		one[n]++;
		return 1;
	};
	return arr[n-1] + arr[n-2];
}

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < _; i++) arr[i] = fib(i);
	for (int i = 0; i < num; i++) {
		int x;
		scanf("%d", &x);
		res[i] = x;
	}
	for (int i = 0; i < num; i++) {
		if (res[i] == 0) printf("1 0\m");
		else if (res[i] == 1) printf("0 1\n");
		else printf("%d %d\n", arr[res[i] - 1], arr[res[i]]);
	}
}