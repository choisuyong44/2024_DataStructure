#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	int two[10];

	int sum = 1;

	for (int i = 0; i < 10; i++) {
		two[i] = sum << i;
		printf("two[%d] = %d\n", i, two[i]);
	}
}

#endif