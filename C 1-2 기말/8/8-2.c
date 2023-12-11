/*
#include <stdio.h>
void copyarr(int dst[], int src[], int SIZE) {
	for (int i = 0;i < SIZE / 4;i++) {
		dst[i] = src[i];
	}
}
int main() {
	int source[8] = { 10,20,30,40,50,60,70,80 };
	int target[8];
	copyarr(target, source, sizeof(target));
	for (int i = 0;i < sizeof(target) / 4;i++) {
		printf("%d", target[i]);
		printf(" ");

	}
	printf("\n");
}*/