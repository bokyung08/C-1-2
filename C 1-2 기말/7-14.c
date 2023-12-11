/*#include <stdio.h>
int main() {
	int num[] = { 10,20,30,40,50,60,70,80 };
	int* ptr = &num[sizeof(num) / sizeof(int) - 1];//&num[7]==80
	int* qtr = &num[4];//50
	for (;ptr >= num;ptr--) {
		printf("*ptr: %d//diff %d\n", *ptr, (qtr - ptr));

	}
	return 0;
}*/