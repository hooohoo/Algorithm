#include <stdio.h>
#include "Score.h"
#include <time.h>

int main() {

	double start, end;

	int length = sizeof DataSet / sizeof DataSet[0];
	Score temp;

	start = (double)clock() / CLOCKS_PER_SEC;
	for (int i = 0; i < length - 1; i++) {

		if (DataSet[i].score > DataSet[i + 1].score) {
			temp = DataSet[i + 1];

			for (int j = 0; j <= i; j++) {

				if (DataSet[j].score > temp.score) {

					for (int k = i; k >= j; k--) {
						DataSet[k + 1] = DataSet[k];
					}

					DataSet[j] = temp;

					break;
				}
			}
		}
	}
	end = (double)clock() / CLOCKS_PER_SEC;

	for (int i = 0; i < length; i++) {
		printf("%lf\n", DataSet[i].score);
	}

	printf("걸린 시간 : %lf초\n", end - start);

	/*
	int arr[] = {9, 10, 1, 3, 2, 5, 4, 6, 7, 8};
	int length = sizeof(arr) / sizeof(int);
	int temp = 0;

	for (int i = 0; i < length - 1; i++) {
		
		if (arr[i] > arr[i + 1]) {
			temp = arr[i + 1];

			for (int j = 0; j <= i; j++) {
		
				if (arr[j] > temp) {
				
					for (int k = i; k >= j; k--) {
						arr[k + 1] = arr[k];
					}
					
					arr[j] = temp;

					break;
				}
			}
		}
	}


	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
	*/

	return 0;
}