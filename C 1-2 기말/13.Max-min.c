/*#include <stdio.h>
int main() {
	int arr[3][4] = { {4,8,9,1},{5,3,7,9},{2,5,6,10} };
	int Max = *(*(arr + 1) + 1);
	int Min = *(*(arr + 1) + 1);
	int i = 0;
	int j = 0;
	for (i = 0;i < 4;i++) {
		for (j = 0;j < 5;j++) {
			if (arr[i][j] > Max) {
				Max = *(*(arr + i) + j);

			}
		}
	}
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 4;j++) {
			if (arr[i][j] <= Min) {
				Min = *(*(arr + i) + j);
			}
		}
	}
	int sub = Max - Min;
	printf("result: %d", sub);
}*/
