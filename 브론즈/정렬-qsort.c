#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second)
{
	if (*(int*)first > * (int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int arr[1000000];
int main() {
	int lim;
	int num;
	int tmp = NULL;
	scanf("%d",&lim);
	for (int i = 0; i < lim; i++) {
		scanf("%d",&num);
		arr[i] = num;
	}

	qsort(arr, lim, sizeof(int), compare);

	for (int i = 0; i < lim; i++) {
		if (tmp == arr[i]) printf("");
		else {
			printf("%d\n", arr[i]);
			tmp = arr[i];
		}
	}
}