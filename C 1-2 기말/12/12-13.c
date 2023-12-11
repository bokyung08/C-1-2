/*#include <stdio.h>
#include <stdlib.h>
struct position {
	int x;
	int y;
};
int main() {
	struct position* ptr = (struct position*)malloc(sizeof(struct position));//구조체 크기만큼 할당 받겠다 ==8
	ptr->x = 10;
	ptr->y = 20;
	printf("%d %d", ptr->x, ptr->y);
	return 0;
}*/