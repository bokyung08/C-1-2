/*#include <stdio.h>
struct ptrs {
	int* x;
	int* y;
};//size 16�ƴ�? �����ʹ� ũ�Ⱑ 8�̴ϱ� ���� ����ptrs �� ũ�� 16
int main() {
	int a = 10;
	int b = 20;
	struct ptrs ptr;
	ptr.x = &a;
	ptr.y = &b;
	printf("%X\t %X" ,&a, &b);
	printf("%X\t %X", ptr.x,ptr.y);
	printf("%X\t %X\n",*(ptr.x), *(ptr.y));
	printf("%d", sizeof(ptr));
	return 0;
}*/