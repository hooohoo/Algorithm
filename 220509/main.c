#include <stdio.h>

int main() {
	int a;

	printf("&a = %p\n", &a);

	int* pa = &a;   // 포인터 형지정자

	int** ppa = &pa;

	int*** pppa = &ppa;

	***pppa;
	***&ppa;
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;

	***pppa = 100;

	printf("&***pppa = %p, &***&ppa = %p, &**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n"
		, &***pppa, &***&ppa, &**ppa, &**&pa, &*pa, &*&a, &a);

	printf("***pppa = %d, ***&ppa = %d, **ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n"
		, ***pppa, ***&ppa, **ppa, **&pa, *pa, *&a, a);



	return 0;
}