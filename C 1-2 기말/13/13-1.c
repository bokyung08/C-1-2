/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");//���� ����ǥ�� �ȵ�
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
		fscanf(fo, "%c", &c);//���Ͽ��� ���ڸ� �д°��� ���� ���°Ծƴ�
		printf("%c", c);//ȭ�� ���
		fprintf(fw, "%c", c);//���Ͽ� ����
	}
	fclose(fo);
	fclose(fw);
	return 0;
}*/