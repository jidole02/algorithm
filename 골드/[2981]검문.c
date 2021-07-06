#include <stdio.h>
#include <stdlib.h>    
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#define MAX 100

int compare(const void* a, const void* b)    // �������� �� �Լ� ����
{
	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 > num2)    // a�� b���� Ŭ ����
		return -1;      // -1 ��ȯ

	if (num1 < num2)    // a�� b���� ���� ����
		return 1;       // 1 ��ȯ

	return 0;           // a�� b�� ���� ���� 0 ��ȯ
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