/*#include <stdio.h>
int main() {
	int num[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
	int *ptr = num;//ptr =num�� �ּ�

	const int LEN = sizeof(num) / sizeof(int);//4*n/4
	for (int i=0;i < LEN;i++) printf("%d ", num[i]);// �迭�� �迭
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", *(num + i));//�迭�� �����ͷ� 
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", ptr[i]);//�迭==������ �̱� ������ *(ptr+i)�� ����
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", *(ptr + i));//num�� ������ �ּҷ� ���� ����
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", *ptr++);//�����ؿ� ���� ����
	return 0;
}*/