#include <stdio.h>
#include "Score.h"
#include <time.h>

/*
void BubbleSort(int DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < Length - 1; i++) {
		for (j = 0; j < Length - (i + 1); j++) {
			if (DataSet[j] > DataSet[j + 1]) {
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
}
*/

void BubbleSort(Score* DataSet, int Length)
{
	int i = 0;
	int j = 0;
	Score temp;

	for (i = 0; i < Length - 1; i++) {
		for (j = 0; j < Length - (i + 1); j++) {
			if (DataSet[j].score > DataSet[j + 1].score) {
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
}

int main(void) {

	double start, end;


	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	start = (double)clock() / CLOCKS_PER_SEC;
	BubbleSort(DataSet, Length);
	end = (double)clock() / CLOCKS_PER_SEC;

	for (i = 0; i < Length; i++) {
		printf("%lf\n", DataSet[i].score);
	}

	printf("\n");

	printf("걸린 시간 : %lf초\n", end - start);

	/*
	int DataSet[] = {6, 4, 2, 3, 1, 5};
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;
	
	BubbleSort(DataSet, Length);

	for (i = 0; i < Length; i++) {
		printf("%d ", DataSet[i]);
	}

	printf("\n");
	*/


	return 0;
}