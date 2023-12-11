/*#include<stdio.h>
#include <string.h>
char* my_strcpy(char* dest, const char* src) {
	char* tmp = dest;
	while ((*dest++ = *src++) != '\0');
	return tmp;
}
int main() {
	char str[] = "The Quick";
	char tmp1[64];
	char tmp2[64];
	char tmp3[64];
	char tmp4[64];
	strcpy(tmp1, str);
	printf("%s\n",tmp1);
	printf("%s\n", strcpy(tmp2, str));
	printf("\n");
	my_strcpy(tmp3, str);
	printf("%s\n",tmp3);
	printf("%s\n", my_strcpy(tmp4, str));

}*/