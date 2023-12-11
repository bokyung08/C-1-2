/*#include <stdio.h>
struct position {
	int x;
	int y;
};
int main() {
	struct position pos[4] = {
		{10,20},
		{123,345},
		{1000,10},
		{2021,2033}
		};
	printf("%d\n", sizeof(pos));//(4+4)*4
	printf("X \t y\n");
	printf("--------------\n");
	for (int i = 0;i < 4;i++) {
		printf("%d \t %d\n", pos[i].x, pos[i].y);
	}
	return 0;
}*/