#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cnt;
	int weight[60];
	int tall[60];
	int tmp = 0;
	int rang[100] = { 0 };
	scanf("%d",&cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &weight[i],&tall[i]);
		// 입력 싹 받아주고 
	}
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt; j++) {
			if (weight[i] < weight[j] && tall[i] < tall[j]) {
				tmp++;
			}
			rang[i] = tmp + 1;
		}
		tmp = 0;
	}

	for (int i = 0; i < cnt; i++) {
		printf("%d ",rang[i]);
	}
}