/*#include <stdio.h>
int main() {
	long long l = 0X8899AABBCCDDEEFF;
	char* ptr = (char*)&l;
	printf("%X \n", ptr);
	printf("%X \n", (ptr + 3));// �ּҰ� �� �ں��� ptr�̶� 3���� ��
	printf("%X", *((int*)(ptr + 3)));//ptr���� �����ϴ� �޸� �ּҿ��� 3����Ʈ ���� �ּҺ��� 4����Ʈ �о ������ ĳ����
	return 0;//�̰� ���� �� 8899���� �׿��� ������ FF���� ������ CC~99�� ���� ����
}*/