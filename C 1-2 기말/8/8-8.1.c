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
	void(*fptr)() = &func;// &붙여도 안붙여도 되는듯?
	int (*gptr)(int x) = gunc;
	double (*hptr)(double x, double y) = hunc;
	fptr();//func 참저
	gptr(10);
	hptr(3.12, 234);
	caller(func);
	caller(gunc);
	caller(hunc);
}//그럼 왜 이걸 쓸까? 그냥 함수 호출하면 되자나!!!!-> 함수 여러개 있을 때 뭐 호출할지 고를 수 있음 ex)caller
*/