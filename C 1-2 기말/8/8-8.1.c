/*#include <stdio.h>


void func(){
	printf("func!\n");
}
int gunc(int x) {
	printf("gunc\n");
	return x + 100;
}

double hunc(double x, double y) {
	printf("hunc %f %f", x, y);
	return x + y;
}
void caller(void(*xptr)()) {
	xptr();
}
int main() {
	void(*fptr)() = &func;// &�ٿ��� �Ⱥٿ��� �Ǵµ�?
	int (*gptr)(int x) = gunc;
	double (*hptr)(double x, double y) = hunc;
	fptr();//func ����
	gptr(10);
	hptr(3.12, 234);
	caller(func);
	caller(gunc);
	caller(hunc);
}//�׷� �� �̰� ����? �׳� �Լ� ȣ���ϸ� ���ڳ�!!!!-> �Լ� ������ ���� �� �� ȣ������ �� �� ���� ex)caller
*/