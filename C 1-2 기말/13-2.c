/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	FILE* fw = fopen("output.txt", "w");
	char buff[512];
	char c;
	for (int i = 0;i < 10;i++) {
		fscanf(fo, "%s", buff);
		
	}
	printf("10th word: %s", buff);
	rewind(fo);
	fclose(fo);
	fo = fopen("sample.txt", "r");
	for (int i = 0;i < 22;i++)
		c = fgetc(fo);
	printf("22nd char: %c", c);
	fclose(fo);
	return 0;
}*/