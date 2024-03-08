#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 1

struct xy {
	int x;
	int y;
};


int main() {
	struct xy case1;
	
	scanf("%d",&case1.x);
	scanf("%d",&case1.y);

	if (case1.x >= 0 && case1.y >= 0) printf("1");
	else if (case1.x <= 0 && case1.y >= 0) printf("2");
	else if (case1.x <= 0 && case1.y <= 0) printf("3");
	else if (case1.x >= 0 && case1.y <= 0) printf("4");
	else if (case1.x == 0 && case1.y == 0) printf("0");
	return 0;
}
# endif