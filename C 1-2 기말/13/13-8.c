/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	FILE* fw = fopen("output.txt", "a");
	if (fo == NULL || fw == NULL) {
		printf("FILE open failed");
		return 1;
	}
	char c;
	while ((c = fgetc(fo)) != EOF) {
		fputc(c, fw);
	}
	fclose(fo);
	fclose(fw);
}*/