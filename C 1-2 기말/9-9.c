/*#include <stdio.h>
#include <stdarg.h>
int sumN(int SIZE, ...) {   //int SIZE->�о�� ���� 
	va_list argptr; //va_list: �� ���������� �����ּҸ� ����Ű�� ������
	int ret = 0;
	va_start(argptr, SIZE); //va_list�� �� �ʱ�ȭ
	for (int i = 0;i < SIZE;i++) {
		int num = va_arg(argptr, int); //va_arg: Ư�� �������� �����ִ� ����Ʈ�� �����͸� ���� �������ڷ� �Ű���
		ret += num;
	}
	va_end(argptr);//�������� ���� �� ���
	return ret;
};
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int s = sumN(3, a, b, c);
	printf("%d", s);
}*/