#include <stdio.h>

int main() {

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

	return 0;
}