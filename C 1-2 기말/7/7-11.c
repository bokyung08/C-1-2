/*#include <stdio.h>
int main() {
	long long l = 0X8899AABBCCDDEEFF;
	char* ptr = (char*)&l;
	printf("%X \n", ptr);
	printf("%X \n", (ptr + 3));// 주소값 맨 뒤보면 ptr이랑 3차이 남
	printf("%X", *((int*)(ptr + 3)));//ptr에서 시작하는 메모리 주소에서 3바이트 뒤의 주소부터 4바이트 읽어서 정수로 캐스팅
	return 0;//이게 쌓일 때 8899부터 쌓여서 맨위인 FF부터 읽으면 CC~99의 값이 나옴
}*/