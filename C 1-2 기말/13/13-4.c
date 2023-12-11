//옮겨적기
/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	FILE* fw = fopen("output.txt", "w");
	if (fo == NULL || fw == NULL) {
		printf("file open failed");
		return 1;
	}
	char buff[512];
	while (feof(fo) != 1) {
		fscanf(fo, "%s", buff);
		printf(">>%s\n", buff);

		fprintf(fw, ">>%s\n", buff);

	}
	return 0;
}*/