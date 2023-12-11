/*#include <stdio.h>
#include <stdlib.h>
int main() {
	double* ptr;
	int num;
	double max = 0;
	double min=999999999;
	printf("how many? ");
	scanf_s("%d", &num);
	ptr = (double*)malloc(num * sizeof(double));
	for (int i = 0;i < num;i++) { 
		printf("%d: ", i + 1);
		scanf_s("%lf", &ptr[i]);
	}
	printf("Your input: ");
	float tmp = 0;
	for (int i = 0;i < num;i++) {
		printf("%.2f ", ptr[i]);
		tmp += ptr[i];
	}
	for (int i = 1;i < num;i++) {
		if (ptr[i] >= max) {
			max = ptr[i];
			
		}
	}
	for (int i = 1;i < num;i++) {
		if (ptr[i] <= min) {
			min = ptr[i];
		}
	}
	printf("\nSum: %.2f", tmp);
	printf("\nAvg: %.2f \n", tmp / num);
	printf("\nMin: %lf",min);
	printf("\nMax: %lf",max);
}*/