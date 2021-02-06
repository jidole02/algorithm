#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int arr[300000] = {0};

int bestWay(int cnt,int lim) {
	int a;
	int sum = 0;
	//for (int i = 0; i < cnt; i++) {
	//	for (int j = 0; j < cnt - 1; j++) {
	//		if (arr[j] < arr[j+1]) {
	//			a = arr[j+1];
	//			arr[j+1] = arr[j];
	//			arr[j] = a;
	//		}
	//	}
	//}
	for (int i = 0; i < cnt; i++) {
		for (int j = 1; j < cnt-1; j++) {
			for (int k = 2; k < cnt-2; k++) {
				if (sum < (arr[i] + arr[j] + arr[k]) && (arr[i] + arr[j] + arr[k]) <= lim) {
					if((i != j && j!=k)&&i!=k) sum = (arr[i] + arr[j] + arr[k]); printf("\n%d", sum);
				}
			}
		}
	}
	//printf("%d",sum);
	return 0;
}

int main() {
	int cnt, lim;
	scanf("%d %d", &cnt, &lim);
	for (int i = 0; i < cnt; i++) scanf("%d",&arr[i]); 
	bestWay(cnt, lim);
}