/*#include <stdio.h>
#include <stdlib.h>
struct position {
	int x;
	int y;
};//4+4니까 더블
int main() {
	struct position* ptr = (struct position*)malloc(sizeof(double));
	ptr->x = 10;
	ptr->y = 20;
	printf("%d %d", ptr->x, ptr->y);
	long long l = 0xaabbccdd;
	struct position* ptr2 = (struct position*)&l;
	printf("%X %X", ptr2->x, ptr2->y);
	return 0;
}*/