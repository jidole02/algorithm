#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int a;
	int cnt = 0;
	int ans = 0;
	int tmp;
	scanf("%d", &N);
	for (long long int i = 0; i < 10000000; i++) {
		tmp = i;
		while (tmp != 0) {
			if (tmp % 10 == 6) {
				if ((tmp / 10) % 10 == 6) {
					if ((tmp / 100) % 10 == 6) {
						cnt++;
						// 6666이면 cnt가 두번 체크된다..ㄷㄷㄷㄷ
						if (cnt == N) ans = i;
						break;
					}
				}
			} 
			tmp = tmp / 10;
		}
	}
	printf("%d", ans);
}