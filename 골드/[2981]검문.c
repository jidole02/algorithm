#include <stdio.h>
#include <stdlib.h>    
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#define MAX 100

int compare(const void* a, const void* b)    // 내림차순 비교 함수 구현
{
	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 > num2)    // a가 b보다 클 때는
		return -1;      // -1 반환

	if (num1 < num2)    // a가 b보다 작을 때는
		return 1;       // 1 반환

	return 0;           // a와 b가 같을 때는 0 반환
}

int Euclidean(int a, int b)
{
	while (1)
	{
		int tmp = b;
		if (b == 0) break;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main() {
	int num;
	int arr[MAX] = { 0 };
	int tmp = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), compare);

	for (int i = 0; i < num-1; i++) {
		if (i == 0) {
			tmp = arr[i] - arr[i + 1];
			continue;
		}
		tmp = Euclidean(tmp, arr[i] - arr[i + 1]);
	}
	for (int i = 1; i <= tmp / 2; i++)
	{
		if (tmp % i == 0 && i!= 1)
		{
			printf("%d ", i);
		}
	}
	printf("%d", tmp);
}