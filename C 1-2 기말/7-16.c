/*#include <stdio.h> //int *const ptr=&a;-> ������ ���� �ĺ��ڰ� *���Ŀ� ���� ptr ��ü�� ���ȭ->����� �ʱ�ȭ �ؾ���
int main() {
	int a = 100;
	int b = 200;
	int* ptr = &a;
	ptr = &b; //����� �ּ� ���� ����
	*ptr = 300; // �� ���� ����
	int* const ptr2 = &a;
	//ptr2=&b;<<<<error ���� �Ұ���
	*ptr2 = 300;//�� ���� ����
	return 0;
}*/