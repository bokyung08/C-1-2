/*#include <stdio.h>
#include <stdarg.h>
int sumN(int SIZE, ...) {   //int SIZE->읽어올 개수 
	va_list argptr; //va_list: 각 가변인자의 시작주소를 가리키는 포인터
	int ret = 0;
	va_start(argptr, SIZE); //va_list의 값 초기화
	for (int i = 0;i < SIZE;i++) {
		int num = va_arg(argptr, int); //va_arg: 특정 가변인자 갖고있는 리스트의 포인터를 다음 가변인자로 옮겨줌
		ret += num;
	}
	va_end(argptr);//가변인자 끝낼 때 사용
	return ret;
};
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int s = sumN(3, a, b, c);
	printf("%d", s);
}*/