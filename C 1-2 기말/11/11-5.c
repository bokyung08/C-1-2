/*
// 뭔 오류 있음
#include <stdio.h>
#include <stdlib.h>
void func() {
	printf("I am the func()\n");
}
void gunc() {
	printf("I am the gunc()\n");
}
int main() {
	double** p;
	p = (double**)malloc(sizeof(double));
	free(p);
	void (**fptr)();
	fptr = (void (**)())malloc(8);
	*fptr = func;
	printf("gunc-func: %x\n", *(gunc) - func);
}*/