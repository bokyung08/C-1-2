/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	FILE* fw = fopen("output.txt", "w");
	if (fo == NULL || fw == NULL) {
		printf("File open Failed\n");
		return -1;
	}
	char buff[512];
	while (feof (fo)!=1) {
		fscanf(fo, "%s", buff);
		printf(">>%s\n", buff);
	}
}*/