/*#include <stdio.h>
void printarr(int arr[][2][2], int SIZE) {
	for (int i = 0;i < SIZE / 4;i++) {
		printf("%d", (**arr)[i]);
	}
	printf("\n\n");
	for (int i = 0; i < SIZE / 8;i++) {
		for (int j = 0;j < 2;i++) {
			printf("%d", (*arr)[i][j]);
		}
	}
	printf("\n\n");
	for (int i = 0;i < SIZE / 16;i++)
		for (int j = 0;j < 2;j++)
			for (int k = 0;k < 2;k++)
				printf("%d", arr[i][j][k]);
}
int main() {
	int arr[][2][2] = {
		{{1,2}, {3,4}},
		{{5,6},{7,8}},
		{{9,10},{11,12}}
	};
	printarr(arr, sizeof(arr));
}
*/