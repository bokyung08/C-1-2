/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	if (fo == NULL) {
		printf("File open failed");
		return 1;
	}
	char buff[512];
	char c;
	for (int i = 0;i < 10;i++)
		fscanf(fo, "%s", buff);
	printf("10th word: %s", buff);
	fclose(fo);
	return 0;
}*/