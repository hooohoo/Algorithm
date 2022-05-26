#include <stdio.h>

void sort(int* num1, int* num2) {
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main() {

	int arr[10] = {5, 8, 2, 1, 6, 3, 7, 4, 9, 0};

	int count = sizeof(arr) / sizeof(int);
	int check = 0;	// 반복문 실행 수 저장용 

	
	for (int i = 0; i < count; i++)
	{
		int t = 0;
		for (int j = t+1; j < count; j++)
		{
			if (arr[t] > arr[j])
			{
				sort((arr+t), (arr+j));
				/*
				int temp = arr[t];
				arr[t] = arr[j];
				arr[j] = temp;
				*/
			}
			t = j;
			check++;
		}
	}
	
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("일반 BubbleSort 총 반복 회수 : %d\n\n", check);
	check = 0;
	

	//-----------------------------------
	// 향상된 bubble sort

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
			check++;	// 총 반복 수 확인 출력용
		}
		jCount--;
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("향상된 Bubble Sort 총 반복 회수 : %d\n\n", check);



	return 0;
}