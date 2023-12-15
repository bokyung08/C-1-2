/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//strlen
unsigned int my_strlen(const char* s) {
	unsigned int cnt = 0;
	while (*s++ != '\0') {//s�� ++�� �ѵ� �װ� 0�� �ƴ� ������
		cnt++;//cnt�� 1������
	}
	return cnt;
}
unsigned int my_strlen2(const char* s) {
	const char* t = s;//t�� s�� �����ּ� ����
	while (*(s++));//*(s++)�� 0�̸� ��������
	return (s-t- 1);
}


//strcpy
char* my_strcpy(char* dest, const char* src) {
	char* tmp = dest;
	while ((*dest++ = *src++) != '\0');//�ּ��� ������? ã�� �� ��ŭ tmp���� ����ϴϱ�
	return tmp;
}

//strcat
char* my_strcat(char* s1, const char* s2) {
	char* tmp = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0') {
		*s1 = *s2;
		s1++;
		s2++;
	}//s1�̶� s2�Ѵ� ������� ���� ���ڿ��� ���� �� ����
	*s1 = '\0';
	return tmp;
}
//strcmp
int my_strcmp(const char* s1, const char* s2) {
	int i = 0;
	while (s1[i] != '\0' || s2[i] != '\0') {
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
}//�̰� vs������ �ȵ��ư� 
//strstr
const char* my_strstr(const char* s1, const char* s2) {
	size_t l1, l2;
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (l2 == 0) return s1;
	if (l2 > l1)return NULL;
	for (size_t i = 0;i <= l1 - l2;++i) {
		if (strncmp(s1 + i, s2, l2 )== 0) {
			return s1 + 1;
		}
	}
	return 0;
}
//atoi
int my_atoi(const char* s) {
	int ret = 0;
	int sign = 1;
	if (*s = ='+')s++;
	else if (*s == '-') {
		sign = -1;
		s++
	}
	while (*s != '\0' && ('0' <= *s && *s <= '9')) {
		ret = (ret * 10) + (*s - '0');
		s++
	}
	return ret * sign;
}

int main() {
	char s[] = "qwer w erewre";
	char word[] = "w";
	char tmp1[64];
	char tmp2[64] = "ddddddd";//�Ҵ��� �������
	
	printf("%d\n", my_strlen(s));
	printf("%d\n", my_strlen2(s));
	printf("%s\n", my_strcpy(tmp1, s));
	printf("%s\n", my_strcat(tmp2, s));
	printf("%d\n", my_strcmp(tmp2, s));
	printf("%s\n", my_strstr(s, word));

}*/