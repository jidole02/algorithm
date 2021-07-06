#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	int arr[100][100] = { "" };
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		for (int j = 0; j < a; j++)
			arr[i][j] = "*";

	//for (int i = 0; i < a; i++)
	//{
	//	for (int j = 0; j < a; j++) {
	//		if (j % 2 == 0 && i % 3 == 1) arr[i][j] = "";
	//	}
	//}

	for (int i = 0; i < a; i++)
		for (int j = 0; j < a; j++)
			printf("%d", arr[i][j]);


}

