#include <stdio.h>
#include "Score.h"

void sort(Score** num1, Score** num2) {
	Score** temp = NULL;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main() {

	int arr[10] = {5, 8, 2, 1, 6, 3, 7, 4, 9, 0};
	//printf("%f\n", DataSet[2].score);

	int count = sizeof(DataSet) / sizeof(Score);
	int check = 0;	// �ݺ��� ���� �� ����� 

	
	for (int i = 0; i < count; i++)
	{
		int t = 0;
		for (int j = t+1; j < count; j++)
		{
			if (DataSet[t].score > DataSet[j].score)
			{
				/*
				sort(&(DataSet[t]), &(DataSet[j]));
				*/
				Score temp = DataSet[t];
				DataSet[t] = DataSet[j];
				DataSet[j] = temp;
			}
			t = j;
			check++;
		}
	}
	
	for (int i = 0; i < count; i++)
	{
		printf("%lf\n", DataSet[i].score);
	}

	printf("�Ϲ� BubbleSort �� �ݺ� ȸ�� : %d\n\n", check);
	check = 0;
	

	//-----------------------------------
	// ���� bubble sort
	/*
	int jCount = count;
	for (int i = 0; i < count; i++)
	{
		int t = 0;
		for (int j = t + 1; j < jCount; j++)
		{
			if (arr[t] > arr[j])
			{
				int temp = arr[t];
				arr[t] = arr[j];
				arr[j] = temp;
			}
			t = j;
			check++;	// �� �ݺ� �� Ȯ�� ��¿�
		}
		jCount--;
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("���� Bubble Sort �� �ݺ� ȸ�� : %d\n\n", check);


	*/
	return 0;
}