/*#include <stdio.h>
#include <string.h>

unsigned int my_strlen(const char* s) {
	unsigned int cnt = 0;
	while (*s++ != '\0')
		cnt++;
	return cnt;
}
unsigned int my_strlen2(const char* s) {
	const char* t = s;
	while (*(s++));//s�� �ƴҶ�����
	return (s-t-1);//NULL ���� ī��Ʈ�ϱ� ����
}
int main() {
	char str[] = "The Quick";
	printf("%d\n", strlen(str));
	
	printf("%d\n", my_strlen2(str));
	return 0;
}*/