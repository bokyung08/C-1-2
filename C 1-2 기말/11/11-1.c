/*#include <stdio.h>
#include <stdlib.h>
int main() {
	int* num = (int*)malloc(100 * sizeof(int));
	for (int i = 0;i < 100;i++)
		num[i] = i;
	int a = 0;
	scanf("%d", &a);
	if (a > 0) {
		num = (int*)malloc(a * sizeof(int));
	}
	else
		num = 0;
}
//메모리 할당 예제*/