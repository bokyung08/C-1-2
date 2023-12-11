/*#include <stdio.h>
struct position {
	int x;
	int y;
	struct position* ptr;
};
int main() {
	struct position pos;
	pos.x = 10;
	pos.y = 20;
	pos.ptr = NULL;
	struct position qos;
	qos.x = 30;
	qos.y = 40;
	qos.ptr = &pos;
	printf("%d %d\n", (*qos.ptr).x, (*qos.ptr).y);
	printf("%d %d", qos.ptr->x, qos.ptr->y);
}*/