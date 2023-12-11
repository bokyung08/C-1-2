/*#include <stdio.h>
int main() {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	const int nonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int* ptr = month;
	const int *qtr = nonth;//배열도 const int 가능
	month[1] = 10;
	*(ptr + 1) = 100;
	printf("%d \n", month[1]);
	printf("%d \n", nonth[2]);
	return 0;
}*/