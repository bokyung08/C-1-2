/*#include <stdio.h>
int* numbers(int n) {
	int ret[64];
	for (int i = 0;i < n;i++) {
		ret[i] = i;
	
	}
	return ret;
}
int main() {
	int* num = numbers(10);
	int* mum = numbers(5);
	for (int i = 0;i < 5;i++)
		*(mum + i) = -i;
	for (int i = 0; i < 10;i++)
		printf("%d ", *(num + i));
	printf("\n");
}*/