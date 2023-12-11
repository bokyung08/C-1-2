/*#include <stdio.h>
#include <stdlib.h>
int main() {
	int(*arr)[4] = (int(*)[])malloc(3 * 4 * sizeof(int*));
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++)
			arr[i][j] = i + j;
	}
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	free(arr);
}*/