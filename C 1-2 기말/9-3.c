/*#include <stdio.h>
char* my_strcat(char* s1, const char* s2) {
	char* tmp = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0') {
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return tmp;
}
int main() {
	char str[] = "The Quick Brown fox jumps over the lazy dog";
	char dst1[64] = "I said ";
	char dst2[64] = "I said ";
	char dst3[64] = "you will say ";
	char dst4[64] = "you will say ";
	strcat(dst1, str);
	printf("%s \n", dst1);
	//printf("%s \n",strcat(dst2, str));
	my_strcat(dst3, str);
	printf("%s\n", dst3);
	printf("%s\n", my_strcat(dst4, str));
	return 0;
}*/