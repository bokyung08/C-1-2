/*#include <stdio.h>
struct ptrs {
	int* x;
	int* y;
};
int main() {
	int a = 10;
	int b = 20;
	struct ptrs ptr;
	ptr.x = &a;
	ptr.y = &b;
	printf("%X\t %X" ,&a, &b);
	printf("%X\t %X", ptr.x,ptr.y);
	printf("%X\t %X",*(ptr.x), *(ptr.y));
}*/