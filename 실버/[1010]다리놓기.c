#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int arr[10000] = { 0 };

int main() {
    int test_num = 0;
    int n, r = 0;
    scanf("%d", &test_num);
    for (int i = 0; i < test_num; i++) {
        long double nf = 1;
        long double af = 1;
        scanf("%d %d", &r, &n);
        if (r == n) {
            arr[i] = 1;
            continue;
        }
        if (r > n - r) r = n - r;
        for (int j = n; j > r; j--) nf *= j;
        for (int j = 1; j <= n - r; j++) af *= j;
        arr[i] = (int)(round(nf / af));
    }
    for (int i = 0; i < test_num; i++) printf("%d\n", arr[i]);
    return 0;
}