#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1

// person 구조체
struct person {
	char name[50];	// 문자 배열로 된 이름
	int age;		// 사람의 나이를 나타내는 정수 값
	float salary;	// 각 개인의 월급을 나타내는 실수 값

};

int main() {
	int a = 10;

	struct person person1;

	// 정보 입력 -> 문자열은 주소, 정수나 실수, 캐릭터는 주소x -> & 사용해야함.
	printf("이름 입력 : ");
	scanf("%s", person1.name);

	printf("나이 입력 : ");
	scanf("%d", &person1.age);

	printf("월급 입력 : ");
	scanf("%f", &person1.salary);


	printf("입력된 정보\n");
	printf("이름 %s\n", person1.name);
	printf("나이 %d\n", person1.age);
	printf("월급 %f\n", person1.salary);
	return 0;
}

#endif