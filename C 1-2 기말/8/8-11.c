/*
#include <stdio.h>//sort�� ���� �Լ��� ������
#include <stdbool.h>
#include <math.h>
bool up(int x, int y) { return (x > y) ? true : false; }
bool down(int x, int y) { return (x < y) ? true : false; }
bool abs_up(int x, int y) { return (x*x > y*y) ? true : false; }
bool abs_down(int x, int y) { return (x*x < y*y) ? true : false; }
bool sin_up(int x, int y) { return (sin(x) > sin(y)) ? true : false; }
void sort(int arr[], const int SIZE, bool cmp(int, int)) {// void sort�� bool�� ��
	const int n = SIZE / sizeof(int);
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++)
			if (cmp(arr[i], arr[j]) == true) {//cmp==compare�� ���Ӹ�(�� ���Ǵ� �޸� ��ġ �� ����
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}
int main() {
	int arr[] = { 1,23,5,43,-5,4,3,56 };
	sort(arr, sizeof(arr), abs_up);
	for (int i = 0;i < sizeof(arr) / sizeof(int);i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}*/