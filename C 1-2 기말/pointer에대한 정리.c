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
& num : 1695676148// num�ּ�
ptr : 1695676148//ptr�� �����ʹϱ� num�� �ּҰ����� 
* ptr : 10//num�� �ּҰ����� �� ����
qtr : 1695676184//ptr�� �ּ�
* qtr : 1695676148//num�� �ּ�
* *qtr : 10//num����
*/