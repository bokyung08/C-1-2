/*#include <stdio.h>
#include <stdlib.h>
int main() {
	int* ptr;
	int* qtr;
	ptr = (int*)malloc(sizeof(int) * 4);//�ϳ��� �����͸� ���� 
	for (int i = 0;i < 4;i++)
		ptr[i] = i * i;
	for (int i = 0;i < 4;i++)
		printf("%d", ptr[i]);
	free(ptr);
	ptr = NULL;//free �� NULL�� �ʱ�ȭ
	free(ptr);
}*/