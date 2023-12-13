/*#include <stdio.h>
int main() {
	int i = 10, j = 20, k = 30, l = 40;
	int* ptr = &i;//ptr이 i의주소 읽어오겠다는 말
	int w = 50, x = 60, y = 70, z = 80;
	int* qtr = &i;
	printf("%X\n", qtr);//i참조
	qtr = 0xAABB;
	printf("%X\n", qtr);
	printf("%X\n", *qtr);//참조해올 값이 없음 컴파일에러는 아니고 걍 음 출력이 안됨
}*/