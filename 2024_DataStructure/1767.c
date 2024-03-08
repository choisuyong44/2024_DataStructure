#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0


int sumFromNtoOne(int n) {
    if (n == 1) {
        return 1;
    }
    else{
        return n + sumFromNtoOne(n - 1);
    }
}

// --- 이하 수정 금지 ---
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumFromNtoOne(n));

    return 0;
}

#endif