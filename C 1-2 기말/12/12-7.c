/*#include <stdio.h>///�����ذ� �ȵʤ���
struct position {
	int x;
	int y;
};
struct position swap(struct position in) {//in �� �׳� �Ű������� ������ �� �� ���� �� �ǹ� ����
	struct position ret = { in.y,in.x };//x�� y�� ������� �ɱ� �����³� in �� position �̳�
	return ret;
}
int main() {
	struct position pos1 ={ 10, 20 };
	struct position pos2;
	pos2 = swap(pos1);
	printf("%d\t%d\n", pos2.x, pos2.y);
	return 0;
}*/