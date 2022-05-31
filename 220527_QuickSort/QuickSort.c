#include <stdio.h>
#include "Score.h"
#include <time.h>

void Swap(Score* A, Score* B)
{
	Score Temp = *A;
	*A = *B;
	*B = Temp;
}

int Partition(Score DataSet[], int Left, int Right)
{
	int First = Left;
	double Pivot = DataSet[First].score;

	++Left;

	while (Left < Right)
	{
		while (DataSet[Left].score <= Pivot && Left < Right)
			++Left;

		while (DataSet[Right].score > Pivot && Left <= Right)
			--Right;

		if (Left >= Right)
			break;

		Swap(&DataSet[Left], &DataSet[Right]);
	}

	Swap(&DataSet[First], &DataSet[Right]);

	return Right;
}

void QuickSort(Score DataSet[], int Left, int Right)
{
	if (Left < Right)
	{
		int Index = Partition(DataSet, Left, Right);

		QuickSort(DataSet, Left, Index - 1);
		QuickSort(DataSet, Index + 1, Right);
	}
}

/*
void Swap(int* A, int* B) 
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}
*/

/*
int Partition(int DataSet[], int Left, int Right)
{
	int First = Left;
	int Pivot = DataSet[First];

	++Left;

	while (Left < Right)
	{
		while (DataSet[Left] <= Pivot && Left < Right)
			++Left;

		while (DataSet[Right] > Pivot && Left <= Right)
			--Right;

		if (Left >= Right)
			break;

		Swap(&DataSet[Left], &DataSet[Right]);
	}

	Swap(&DataSet[First], &DataSet[Right]);

	return Right;
}
*/

/*
void QuickSort(int DataSet[], int Left, int Right)
{
	if (Left < Right)
	{
		int Index = Partition(DataSet, Left, Right);

		QuickSort(DataSet, Left, Index-1);
		QuickSort(DataSet, Index+1, Right);
	}
}
*/

int main(void) {

	double start, end;

	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	start = (double)clock() / CLOCKS_PER_SEC;
	QuickSort(DataSet, 0, Length - 1);
	end = (double)clock() / CLOCKS_PER_SEC;

	for (i = 0; i < Length; i++)
	{
		printf("%lf\n ", DataSet[i].score);
	}

	printf("\n");

	printf("걸린 시간 : %lf초\n", end - start);

/*
	int DataSet[] = {6, 4, 2, 3, 1, 5};
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	QuickSort(DataSet, 0, Length-1);

	for (i = 0; i < Length; i++)
	{
		printf("%d ", DataSet[i]);
	}

	printf("\n");
*/

	return 0;
}

