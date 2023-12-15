/*#include <stdio.h>
int main() {
	int num = 10;
	int* ptr = &num;
	int** qtr = &ptr;

	printf("num: %d\n", num);
	printf("&num: %X\n", &num);
	printf("ptr: %X\n", ptr);
	printf("*ptr: %d\n", *ptr);
	printf("qtr: %X\n", qtr);
	printf("*qtr: %X\n", *qtr);
	printf("**qtr: %d", **qtr);
}
/*
//output
num: 10
& num : 1695676148// num주소
ptr : 1695676148//ptr은 포인터니까 num의 주소값가짐 
* ptr : 10//num의 주소값으로 가 참조
qtr : 1695676184//ptr의 주소
* qtr : 1695676148//num의 주소
* *qtr : 10//num참조
*/