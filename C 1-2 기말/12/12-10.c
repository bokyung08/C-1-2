/*#include <stdio.h>
#include <string.h>
struct myarray {
	int x[4];
};
void func(struct myarray arr) {
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr.x));
	printf("%d\n", arr.x[0]);
	printf("%d\n", arr.x[1]);
	printf("%d\n", arr.x[2]);
	printf("%d\n", arr.x[3]);
}
int main() {
	struct myarray brr = { {10,20,30,40} };
	func(brr);
	return 0;
}*/