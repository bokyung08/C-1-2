/*#include<stdio.h>
int main() {
	int a = 10, b = 20, c = 30;
	int* ptra[3] = { &a,&b,&c };//������ �迭 -> �迭�� �� ���Ұ� �������� �� = ���������ͷε� ��������-> ���ڿ� �ٷ� �� ���� ����
	for (int i = 0;i < 3;i++) {
		printf(" ptra[%d]: %d\n", i, ptra[i]);
		printf("*ptra[%d]:%d\n", i, *ptra[i]);

	}
	printf("\n");
	int arr1[3] = { 10,20,30 };
	int arr2[3] = { 40,50,60 };
	int arr3[3] = { 70,80,90 };
	int(*aptr)[3];
	aptr = &arr1;
	printf("%d %d %d\n", (*aptr)[0], (*aptr)[1], (*aptr)[2]);
	aptr = &arr2;
	printf("%d %d %d \n", (*aptr)[0], (*aptr)[1], (*aptr)[2]);
	return 0;
}*/