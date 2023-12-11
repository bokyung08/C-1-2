/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");//작은 따옴표면 안됨
	FILE* fw = fopen("output.txt", "w");
	char c;
	if (fo == NULL) {
		printf("fofile open failed\n");
		return 1;
	}
	if (fw == NULL) {
		printf("fwfile open failed\n");
		return 1;
	}
	while (feof(fo) == 0) {
		fscanf(fo, "%c", &c);//파일에서 문자를 읽는거임 내가 쓰는게아님
		printf("%c", c);//화면 출력
		fprintf(fw, "%c", c);//파일에 쓰기
	}
	fclose(fo);
	fclose(fw);
	return 0;
}*/