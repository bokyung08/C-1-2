/*#include <stdio.h>
#include <stdlib.h>//for malloc()
int main() {
	double* ptr;
	int num;
	printf("how many: ");
	scanf_s("%d", &num);
	ptr = (double*)malloc(num * sizeof(double));
	for (int i = 0;i < num;i++) {
		printf("%d: ", i + 1);
		scanf_s("%lf", &ptr[i]);
	}
	float tmp = 0;
	for (int i = 0;i < num;i++) {
		printf("%lf", ptr[i]);
		tmp += ptr[i];
	}
	printf("\nAvg:%.2f\n", tmp / num);
}*/