/*#include <stdio.h>
struct position {
	int x;
	int y;
	struct position* ptr;// position �� ���� ������ ����
};
int main() {
	struct position pos;
	pos.x = 10;
	pos.y = 20;
	pos.ptr = NULL;// � ����ü�� ����Ű�� ������ �ǹ�
	struct position qos;
	qos.x = 30;
	qos.y = 40;
	qos.ptr = &pos;//pos ����ü�� �ּ�
	printf("%d %d\n", (*qos.ptr).x, (*qos.ptr).y);//*qos�� ����Ű�� �ּ�ü�� xy�� == pos�� xy��
	printf("%d %d", qos.ptr->x, qos.ptr->y);
}*/