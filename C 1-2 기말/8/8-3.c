/*#include <stdio.h>
void copyarr(void* dst, void* src, int SIZE) {// void �� �ϸ� ���� Ÿ��ĳ������ ������ �ʾ� ������ ���µ� 

	char* tmp = dst;//���⼭ char �� ġȯ��-> double�̵� int �� �� ���簡���ϰ� ����
	const char* s = src;// src������ ������ const dst �� ���簡 �ž��ؼ� ���� ���ؾ������� dst�� �Ⱥ���
	for (int i = 0;i < SIZE;i++) {
		*tmp++ = *s++;
	}
}//->mempcy �Լ��� ����
int main() {
	int source[8] = { 10,20,30,40,50,60,70,80 };
	int target[8];
	copyarr(target,source, sizeof(target));
	for (int i = 0;i < sizeof(target) / 4;i++)
		printf("%d", target[i]);
	printf("\n");
}*/