/*#include <stdio.h>
int main() {
	int num[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
	int *ptr = num;//ptr =num의 주소

	const int LEN = sizeof(num) / sizeof(int);//4*n/4
	for (int i=0;i < LEN;i++) printf("%d ", num[i]);// 배열을 배열
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", *(num + i));//배열을 포인터로 
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", ptr[i]);//배열==포인터 이기 때문에 *(ptr+i)와 같음
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", *(ptr + i));//num의 더해진 주소로 가서 참조
	printf("\n");
	for (int i=0;i < LEN;i++)printf("%d ", *ptr++);//참조해온 값을 더함
	return 0;
}*/