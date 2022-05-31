#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Score.h"
#include <time.h>

/* 리턴값이 */
/*  < 0 이면, _elem1이 _elem2보다 작다 */
/*   0 이면, _elem1이 _elem2와 같다 */
/*  > 0 이면, _elem1이 _elem2보다 크다 */
/*
int CompareScore(const void* _elem1, const void* _elem2)
{
	int* elem1 = (int*)_elem1;
	int* elem2 = (int*)_elem2;

	if (*elem1 > * elem2)
		return 1;
	else if (*elem1 < *elem2)
		return -1;
	else
		return 0;
}
*/


int CompareScore(const void* _elem1, const void* _elem2)
{
	Score* elem1 = (Score*)_elem1;
	Score* elem2 = (Score*)_elem2;

	if (elem1->score > elem2->score)
		return 1;
	else if (elem1->score < elem2->score)
		return -1;
	else
		return 0;
}

int main(void)
{

	double start, end;

	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	start = (double)clock() / CLOCKS_PER_SEC;
	qsort((void*)DataSet, Length, sizeof(Score), CompareScore);
	end = (double)clock() / CLOCKS_PER_SEC;

	for (i = 0; i < Length; i++) {
		printf("%lf\n ", DataSet[i].score);
	}

	printf("\n");

	printf("걸린 시간 : %lf초\n", end - start);

	/*
	int DataSet[] = {6, 4, 2, 3, 1, 5};
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	qsort((void*)DataSet, Length, sizeof(int), CompareScore);

	for (i = 0; i < Length; i++) {
		printf("%d ", DataSet[i]);
	}
	
	printf("\n");
	*/

	

	return 0;
}