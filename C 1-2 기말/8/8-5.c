/*#include <stdio.h>
int main() {
	int a = 10, b = 20, c = 30;
	int* ptra[3] = { &a,&b,&c };
	printf("a: %X, b:%X, c:%X", &a, &b, &c);
	for (int i = 0;i < 3;i++) {
		printf("ptra[%d]: %X\n", i, ptra + i);
		printf("*ptra[%d]: %X \n", i, *(ptra + i));
		printf("**ptra[%d]: %X\n", i, **(ptra + i));
	}
	printf("\n");
}*/