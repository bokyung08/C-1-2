/*#include <stdio.h>
#include <stdlib.h>
int main() {
	int* ptr;
	int* qtr;
	ptr = (int*)malloc(sizeof(int) * 4);//하나의 포인터만 갖기 
	for (int i = 0;i < 4;i++)
		ptr[i] = i * i;
	for (int i = 0;i < 4;i++)
		printf("%d", ptr[i]);
	free(ptr);
	ptr = NULL;//free 후 NULL로 초기화
	free(ptr);
}*/