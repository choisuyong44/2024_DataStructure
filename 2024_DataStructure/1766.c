#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1

// person ����ü
struct person {
	char name[50];	// ���� �迭�� �� �̸�
	int age;		// ����� ���̸� ��Ÿ���� ���� ��
	float salary	// �� ������ ������ ��Ÿ���� �Ǽ� ��

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