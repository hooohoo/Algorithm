#include <stdio.h>
#include <string.h>

int main() {

	int arr[] = { 5, 2, 1, 4, 9, 3, 7, 6, 8};
	int length = sizeof(arr) / sizeof(int);
	int j = 0;
	int temp = 0;

	for (int i = 0; i < length-1; i++) {
		temp = 0;
		if (arr[i] > arr[i + 1]) {
			temp = arr[i + 1];
			
			/*arr[i] = arr[i+1];
			arr[i+1] = temp;*/
		}
		if (i < length) {
			for (j = 0; j <= i-1; j++) {
				if (arr[j] < temp) {
					continue;
				}
			}
			while (i != 0) {
				arr[i + 1] = arr[i];
				i--;
			}
			arr[i + 1] = arr[j];
			arr[j] = temp;
		}
	}

	for (int i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}