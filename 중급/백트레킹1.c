#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lim;
int cnt;
int visit[9] = { 0 };
int arr[9] = { 0 };

int Check(int value,int index) {
	if (visit[value] == 1) return 0;

	arr[index] = value;
	
	if (index == cnt) {
		for (int i = 1; i <= cnt; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return 0;
	}

	visit[value] = 1; // 중복검사

	for (int i = 1; i <= lim; i++) {
		Check(i, index + 1);
	}
	visit[value] = 0;
	return 0;
}

int main() {
	// 배열을 만들어서 중복검사를 해라....
	scanf("%d %d",&lim,&cnt);
	Check(0,0);
}