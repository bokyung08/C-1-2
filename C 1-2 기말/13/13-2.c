/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	FILE* fw = fopen("output.txt", "w");
	char buff[512];
	char c;
	for (int i = 0;i < 10;i++) {
		fscanf(fo, "%s", buff);//fscanf�� �Ҷ��� &�� �Ƚᵵ �Ǵ� �ɱ�?
		
	}//buff�� 10���� �ܾ �о ���� ���Ϳ������ϴ°��� ������ �о ���� ������ �� �ִ� �κ��� ����
	printf("10th word: %s", buff);
	rewind(fo);// ���� ������ ���������� �ǵ�����
	fclose(fo);//���� �ݱ�
	fo = fopen("sample.txt", "r");
	for (int i = 0;i < 22;i++)
		c = fgetc(fo);//i �� 22�� �ɶ����� for �������� 22��° ���� ����
	printf("22nd char: %c", c);
	fclose(fo);
	return 0;
}*/