/*#include <stdio.h>
#include<stdlib.h>
int my_atoi(const char* s) {
	int ret = 0;
	int sign = 1;
	if (*s == '+')s++;//*s=참조하는 문자 첫 문자가 +면 그냥 건너 뛰기

	else if (*s == '-') {
		sign = -1;
		s++;
	}
	while (*s != '\0' && ('0' <= *s && *s <= '9')) {//s가 NULL 이 될때 까지
		ret = (ret * 10) + (*s - '0');//문자열 에서 NULL빼고 ret에 더하기 ret*10하는 이유는 자릿수 늘리려고
		s++;
	}
	return ret * sign;
}
int main() {
	char str[] = "-1000a9876";
	printf("%d\n", atoi(str) + 1);
	printf("%d\n", my_atoi(str) + 1);
}*/