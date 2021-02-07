#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long int num;
	long long int arr[100000] = { NULL };
	int any;
	int j = 0;
	int k = 0;
	int sum = 0;
	int tmp;
	scanf("%d", &num);
	tmp = num;
	for (int i = 0; i < num; i++) {
		any = num - i;
		while (any != 0) {
			arr[j] = any % 10;
			any /= 10;
			//printf("%d ", arr[j]);
			sum += arr[j];
			j++;
		}
		//printf(" %d %d\n", num - i, sum);

		if (sum + num-i == num) {
			if (tmp > num - i) {
				tmp = num - i;
			}
		}
		sum = 0;
		j = 0;
	}
	if (tmp == num) {
		printf("0");
	}
	else {
		printf("%d", tmp);
	}
}