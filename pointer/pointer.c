#include <stdio.h>

void swap(int* pa, int* pb){
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {

	int a = 20;
	int b = 30;
	printf("swap Àü\n");
	printf("a = %d, b = %d\n", a, b);
	
	swap(&a, &b);
	
	printf("swap ÈÄ\n");
	printf("a = %d, b = %d\n", a, b);


	/////////

	// malloc(), calloc(), realloc()

	int* pa = (int*)malloc(100);

	for (int i = 0; i < 25; i++) {
		pa[i] = i;
	}

	for (int i = 0; i < 25; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	pa = (int*)realloc(pa, 200);

	for (int i = 25; i < 50; i++) {
		pa[i] = i + 1;
	}

	for (int i = 0; i < 50; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	free(pa);




	return 0;
}