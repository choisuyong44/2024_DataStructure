#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1

// person 구조체
struct person {
	char name[50];	// 문자 배열로 된 이름
	int age;		// 사람의 나이를 나타내는 정수 값
	float salary	// 각 개인의 월급을 나타내는 실수 값

};

int main() {
	int two[10];

	int sum = 1;

	for (int i = 0; i < 10; i++) {
		two[i] = sum << i;
		printf("two[%d] = %d\n", i, two[i]);
	}
}

#endif