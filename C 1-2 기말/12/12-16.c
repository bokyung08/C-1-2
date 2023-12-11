/*#include <stdio.h>
struct position {
	int x;
	int y;
	struct position* ptr;// position 에 대한 포인터 가짐
};
int main() {
	struct position pos;
	pos.x = 10;
	pos.y = 20;
	pos.ptr = NULL;// 어떤 구조체도 가리키지 않음을 의미
	struct position qos;
	qos.x = 30;
	qos.y = 40;
	qos.ptr = &pos;//pos 구조체의 주소
	printf("%d %d\n", (*qos.ptr).x, (*qos.ptr).y);//*qos가 가리키는 주소체의 xy값 == pos의 xy값
	printf("%d %d", qos.ptr->x, qos.ptr->y);
}*/