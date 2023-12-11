/*include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct myarray { int x[32]; };
struct myarray func() {
	struct myarray brr = { {0, } };
	return brr;
}
struct myarray* gunc() {
	struct myarray brr = { {0,} };
	return &brr;
}
int main() {
	clock_t start, end;
	struct myarray ret;
	int num;
	start = clock();
	for (int i = 0;i < 1000000000;i++) {
		ret = func();

	}
	end = clock();
	printf("Time elasped: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
	return 0;
}*/