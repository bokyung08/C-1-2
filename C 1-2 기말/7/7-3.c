/*#include <stdio.h>
#include <string.h>
int main() {
	char name[64];
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = 0;//입력 받을 때 마지막에 엔터 치는거 까지 입력으로 받아들임=그 마지막을 NULL로
	printf(">>%s<<", name);
	return 0;
}*/