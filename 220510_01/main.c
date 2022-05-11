#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int calculator(int(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}


int main() {

	int a = 10;
	int b = 20;

	int (*pfunc)(int, int);

	pfunc = add;

//	printf("add pointer = %p\n", pfunc);
//	printf("%d + %d = %d\n", a, b, pfunc(a, b));

	int oper = 0;
	int result = 0;

	printf("숫자를 입력해주세요(0 ~ 2) : ");
	scanf("%d", &oper);

	switch (oper) {
	case 0:
		result = calculator(add, a, b);
		printf("%d + %d = %d\n", a, b, result);
		break;

	case 1:
		result = calculator(sub, a, b);
		printf("%d - %d = %d\n", a, b, result);
		break;

	case 2:
		result = calculator(mul, a, b);
		printf("%d * %d = %d\n", a, b, result);
		break;

	default :
		printf("잘못입력하셨습니다");
	}

	int(*pfuncArray[3])(int, int);
	char operArray[3] = {'+', '-', '*'};

	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;

	result = calculator(pfuncArray[oper], a, b);

	printf("%d %c %d = %d\n", a, operArray[oper], b, result);

	


	return 0;
}
