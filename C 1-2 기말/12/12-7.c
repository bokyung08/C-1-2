/*#include <stdio.h>///걍이해가 안됨ㅅㅂ
struct position {
	int x;
	int y;
};
struct position swap(struct position in) {//in 은 그냥 매개변수로 지정해 준 것 ㅇㅇ 별 의미 없음
	struct position ret = { in.y,in.x };//x랑 y를 갖고오는 걸까 ㅇㅇ맞네 in 이 position 이네
	return ret;
}
int main() {
	struct position pos1 ={ 10, 20 };
	struct position pos2;
	pos2 = swap(pos1);
	printf("%d\t%d\n", pos2.x, pos2.y);
	return 0;
}*/