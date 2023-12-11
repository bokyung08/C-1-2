/*#include <stdio.h>
struct position {
	int x;
	int y;
};
int main() {
	struct position pos = { 10,20 };
	struct position* ptr;
	ptr = &pos;
	printf("%d\t %d\n",(*ptr).x, (*ptr).y);
	printf("%d \t %d\n", ptr->x, ptr->y);//ㅇㅇ 그러니까 약간 &대신에 -> 쓴다는 말인듫?

	return 0;

}
*/