/*#include <stdio.h>//char str[] vs char *str-> str[]�� �������� char *str-> ���� �Ұ� const char *�� �����ϴ� ��
int global_dummy;
int main() {
	int local_dummy;
	char str1[] = "Hello";
	char* str2 = "Hello";
	printf("%s", str1);
	printf("%s \n", str2);
	printf("local_dummy: %X \n", &local_dummy);
	printf("       str1: %X \n\n", str1);
	printf("global_dummy: %X\n", &global_dummy);
	printf("       str2: %X \n", str2);
	return 0;
}*/