/*#include <stdio.h>
int main() {
	int i = 10, j = 20, k = 30, l = 40;
	int* ptr = &i;//ptr�� i���ּ� �о���ڴٴ� ��
	int w = 50, x = 60, y = 70, z = 80;
	int** qtr = &ptr;//qtr�� ptr�� �ּ�
	printf("%X\n", &ptr);//ptr�� �ּ�
	printf("%X\n", qtr);//ptr���ּ�

	printf("%X\n", *qtr);//i�� �ּ�
	printf("%X\n", **qtr);//i����
}*/
/*#include <stdio.h>
int main() {
	int i = 10;
	int* ptr = &i;
	int** qtr = ptr;//�̰� �� qtr�̶� ptr�̶� ����
	printf("%X\n", *ptr);
	printf("%X\n", *qtr);//qtr==ptr==&i
	printf("%X\n", i);
	//���� %X�� ����ؼ� A�����µ� ������ 10 �����°� ����
}*/