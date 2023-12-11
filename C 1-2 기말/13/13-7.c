/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	FILE* fw = fopen("output.txt", "w");
	if (fo == NULL || fw == NULL) {
		printf("file open failed\n");
		return 1;
	}
	char c;
	while (feof(fo) != 1) {//fscanf 대신 fputc,fgetc를 쓰기도 함
		fscanf(fo, "%c", &c);
		printf("%c", c);
		fprintf(fw, "%c", c);

	}
	fclose(fo);
	fclose(fw);
}*/