/*#include <stdio.h>
void copyarr(void* dst, void* src, int SIZE) {// void 로 하면 원래 타입캐스팅을 해주지 않아 에러가 나는데 

	char* tmp = dst;//여기서 char 로 치환함-> double이든 int 든 다 복사가능하게 만듦
	const char* s = src;// src에대한 참조를 const dst 는 복사가 돼야해서 값이 변해야하지만 dst는 안변함
	for (int i = 0;i < SIZE;i++) {
		*tmp++ = *s++;
	}
}//->mempcy 함수와 같음
int main() {
	int source[8] = { 10,20,30,40,50,60,70,80 };
	int target[8];
	copyarr(target,source, sizeof(target));
	for (int i = 0;i < sizeof(target) / 4;i++)
		printf("%d", target[i]);
	printf("\n");
}*/