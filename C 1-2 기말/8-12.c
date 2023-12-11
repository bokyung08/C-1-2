/*#include <stdio.h>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int (*selector(int x))(int, int) {
	if (x == 1)return add;
	return sub;
}
int main() {
	int (*calc)(int, int);//애는 약간 선언만 해주는 그런느낌?
	calc = selector(1);
	printf("%d\n", calc(10, 20));
	calc = selector(2);
	printf("%d", calc(10, 20));
	return 0;
}*/