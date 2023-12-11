/*#include <stdio.h>
int main() {
	FILE* fo = fopen("sample.txt", "r");
	FILE* fw = fopen("output.txt", "w");
	char buff[512];
	char c;
	for (int i = 0;i < 10;i++) {
		fscanf(fo, "%s", buff);//fscanf를 할때는 &을 안써도 되는 걸까?
		
	}//buff에 10개의 단어를 읽어서 저장 컴터에저장하는거임 파일을 읽어서 내가 관여할 수 있는 부분은 없다
	printf("10th word: %s", buff);
	rewind(fo);// 파일 포인터 시작점으로 되돌리고
	fclose(fo);//파일 닫기
	fo = fopen("sample.txt", "r");
	for (int i = 0;i < 22;i++)
		c = fgetc(fo);//i 가 22가 될때까지 for 문돌리고 22번째 문자 저장
	printf("22nd char: %c", c);
	fclose(fo);
	return 0;
}*/