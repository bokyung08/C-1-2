/*
#include<stdio.h>
void copyarr(int dst[4], int src[4]) {
	for (int i = 0;i < sizeof(dst)/4 ;i++) {
		dst[i] = src[i];
	}
}
/*
void copyarr2(int *dst,int *src){
for ( int i =0;i <4;i++){
	dst[i]=src[i];
}///copyarr=copyarr2
int main() {
	int source[4] = { 10,20,30,40 };
	int target[4];
	copyarr(target, source);// target�� source�� �ּҰ� ����� �� -> int *const source, int *const target�� ����
	printf("%d %d %d %d", target[0], target[1], target[2], target[3]);
}*/