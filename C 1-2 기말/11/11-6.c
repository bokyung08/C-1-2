/*#include <stdio.h>
#include <stdlib.h>
int main() {
	int* ptr;
	int* qtr;
	ptr = qtr = (int*)malloc(sizeof(int) * 4);// 동적할당
	for (int i = 0;i < 4;i++) {
		ptr[i] = i * i;
	}
	for (int i = 0;i < 4;i++)
		printf("%d ", qtr[i]);
	free(ptr);
	free(qtr);
}*/