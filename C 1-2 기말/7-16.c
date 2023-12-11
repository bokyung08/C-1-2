/*#include <stdio.h> //int *const ptr=&a;-> 포인터 변수 식별자가 *이후에 있음 ptr 자체를 상수화->선언시 초기화 해야함
int main() {
	int a = 100;
	int b = 200;
	int* ptr = &a;
	ptr = &b; //저장된 주소 변경 가능
	*ptr = 300; // 값 변경 가능
	int* const ptr2 = &a;
	//ptr2=&b;<<<<error 변경 불가능
	*ptr2 = 300;//값 변경 가능
	return 0;
}*/