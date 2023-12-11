/*#include <stdio.h>
#include <time.h>
double measure(unsigned int TRY, void (*fptr)()) {
	clock_t start, end;
	start = clock();
	for (int i = 0;i < TRY;i++) {
		fptr();
	}
	end = clock();
	return (double)(end - start) / CLOCKS_PER_SEC;0;
}
void cal_int() {
	int a = 10, b = 20;
	int c = a * b;
}
void cal_float() {
	float a = 10.0f, b = 20.0f;
	float c = a * b;
}
int main() {
	printf("integer calc: %lf\n", measure(2000000000, cal_int));
	printf("realnum calc: %lf\n", measure(20000000, cal_float));
	return 0;
}*///함수 포인터를 이용해 int 호출할지 float호출할지 고를 수있음