#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1

// person ����ü
struct person {
	char name[50];	// ���� �迭�� �� �̸�
	int age;		// ����� ���̸� ��Ÿ���� ���� ��
	float salary;	// �� ������ ������ ��Ÿ���� �Ǽ� ��

};

int main() {
	int a = 10;

	struct person person1;

	// ���� �Է� -> ���ڿ��� �ּ�, ������ �Ǽ�, ĳ���ʹ� �ּ�x -> & ����ؾ���.
	printf("�̸� �Է� : ");
	scanf("%s", person1.name);

	printf("���� �Է� : ");
	scanf("%d", &person1.age);

	printf("���� �Է� : ");
	scanf("%f", &person1.salary);


	printf("�Էµ� ����\n");
	printf("�̸� %s\n", person1.name);
	printf("���� %d\n", person1.age);
	printf("���� %f\n", person1.salary);
	return 0;
}

#endif