/*#include <stdio.h>
int main() {
	FILE* fw = fopen("output.txt", "w");
	if (fw == NULL) {
		printf("File open failed");
		return 1;
	}
	fprintf(fw, "you can't see this text");
	int temp;
	printf("pause\n");
	scanf("%d", &temp);
	printf("done");
	fclose(fw);//fclose 를 해줘야 텍스트가 작성된걸 확인할 수있음
	return 0;
}*/