/*#include <stdio.h>
int main() {
	int i = 10, j = 20, k = 30, l = 40;
	int* ptr = &i;//ptr이 i의주소 읽어오겠다는 말
	int w = 50, x = 60, y = 70, z = 80;
	int** qtr = &ptr;//qtr은 ptr의 주소
	printf("%X\n", &ptr);//ptr의 주소
	printf("%X\n", qtr);//ptr의주소

	printf("%X\n", *qtr);//i의 주소
	printf("%X\n", **qtr);//i참조
}*/