#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int lim;
	int tmp;
	int arr[1001];
	scanf("%d",&lim);
	for (int i = 0; i < lim; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < lim; i++) {
		for (int j = 0; j < lim - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < lim; i++) {
		printf("%d", arr[i]);
	}
}