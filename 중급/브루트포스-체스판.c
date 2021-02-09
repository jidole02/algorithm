#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char arr[60][60];
    int hei, wid;
    int cntB = 0;
    int cntBW = 0;
    int tmp = 32;
    scanf("%d %d", &hei, &wid);
    for (int j = 0; j < hei; j++) {
        scanf("%s", &arr[j]);
    }

    for (int k = 0; k < hei - 7; k++) {
        for (int z = 0; z < wid - 7; z++) {
            cntB = 0; cntBW = 0;    
            for (int i = k; i < 8 + k; i++) {
                for (int j = z; j < 8 + z; j++) {
                    if ((i + j) % 2 == 0) {
                        if (arr[i][j] == 'B') cntBW++;
                        else cntB++;
                    }
                    else {
                        if (arr[i][j] == 'B') cntB++;
                        else cntBW++;
                    }
                }
            }
            if (tmp > cntBW) tmp = cntBW;
            if (tmp > cntB) tmp = cntB;
        }
    }
    printf("%d", tmp);
}