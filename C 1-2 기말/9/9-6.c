/*#include <stdio.h>
#include<stdlib.h>
int my_atoi(const char* s) {
	int ret = 0;
	int sign = 1;
	if (*s == '+')s++;//*s=�����ϴ� ���� ù ���ڰ� +�� �׳� �ǳ� �ٱ�

	else if (*s == '-') {
		sign = -1;
		s++;
	}
	while (*s != '\0' && ('0' <= *s && *s <= '9')) {//s�� NULL �� �ɶ� ����
		ret = (ret * 10) + (*s - '0');//���ڿ� ���� NULL���� ret�� ���ϱ� ret*10�ϴ� ������ �ڸ��� �ø�����
		s++;
	}
	return ret * sign;
}
int main() {
	char str[] = "-1000a9876";
	printf("%d\n", atoi(str) + 1);
	printf("%d\n", my_atoi(str) + 1);
}*/