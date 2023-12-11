/*#include <stdio.h>
int main() {
	int a = 100;
	int b = 200;
	int* ptr = &a;
	ptr = &b;
	*ptr = 300;
	const int* ptr2 = &a;// const int *ptr const 가 * 이전에 있음 -> ptr로 참조하는 값을 상수화 하겠다 *ptr이 상수
	ptr2 = &b;
	//*ptr2 = 300; 변경 불가능
}*/