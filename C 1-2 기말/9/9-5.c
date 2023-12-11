
/*#include <stdio.h>
#include <string.h>
const char* my_strstr(const char* s1, const char* s2) {
	size_t l1, l2;
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (l2 == 0)return s1;
	if (l2 > l1)return NULL;
	
	for (size_t i = 0; i <= l1 - l2; ++i) {
		if (strncmp(s1 + i, s2, l2) == 0) {
			return s1 + i;  // Found the substring
		}
	}
	return 0;
}
int main() {
	char str[] = "apple Fox ";
	char word1[] = "Fox";
	char word2[] = "lion";
	printf("%s\n", my_strstr(str, word1));
	printf("%s\n", my_strstr(str, word2));
	return 0;
}
*/