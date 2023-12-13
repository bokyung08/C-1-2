/*#include <stdio.h>
int main() {
	int i = 10, j = 20, k = 30, l = 40;
	int* ptr = &i;//ptr이 i의주소 읽어오겠다는 말
	int w = 50, x = 60, y = 70, z = 80;
	int** qtr = &ptr;//qtr은 ptr의 주소
	printf("%X\n", &ptr);//ptr의 주소
	printf("%X\n", qtr);//ptr의주소

	printf("%X\n", *qtr);//i의 주소
	printf("%X\n", **qtr);//i참조
}*/
/*#include <stdio.h>
int main() {
	int i = 10;
	int* ptr = &i;
	int** qtr = ptr;//이건 걍 qtr이랑 ptr이랑 같대
	printf("%X\n", *ptr);
	printf("%X\n", *qtr);//qtr==ptr==&i
	printf("%X\n", i);
	//ㅇㅏ %X로 출력해서 A나오는듯 원래는 10 나오는게 맞음
}*/