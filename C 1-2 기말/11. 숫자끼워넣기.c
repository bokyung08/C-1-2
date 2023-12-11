/*#include <stdio.h>
#include <string.h>
int main() {
	int input1[8];
	int j,temp,i,input2,w;

	printf("input1: ");
	for (i = 0;i < 7;i++) {
		scanf("%d",&input1[i]);
	}
	for (i = 0;i < 7;i++) {
		for (j = 0;j < 7;j++) {
			if (input1[i] < input1[j]) {
				temp = input1[i];
				input1[i] = input1[j];
				input1[j] = temp;
			}
		}
	}
	printf("input1: ");
	for (i = 0;i < 7;i++) {
		printf("%d ", input1[i]);
	}
	printf("\n");


	printf("input2: ");
	scanf("%s", &input2);
	for (i = 0;i < 7;i++) {
		if (input2 <= input1[i]) {
			w = i;
			break;
		}
	}
	for (i = 7; i>w; i--) {
		input1[i] = input1[i - 1];
	}
	input1[w] = input2;
	printf("output: ");
	for (i = 0;i < 8;i++) {
		printf("%d ", input1[i]);
	}
	return 0;
	
}*/
//내가 외틀렷을ㄲ ㅏ
/*#include <stdio.h>

int main() {
	int input1[8];
	int j, temp, i, input2, w;

	printf("input1: ");
	for (i = 0; i < 8; i++) {
		scanf("%d", &input1[i]);
	}

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (input1[i] < input1[j]) {
				temp = input1[i];
				input1[i] = input1[j];
				input1[j] = temp;
			}
		}
	}

	printf("input1: ");
	for (i = 0; i < 7; i++) {
		printf("%d ", input1[i]);
	}
	printf("\n");

	printf("input2: ");
	scanf("%d", &input2);

	for (i = 0; i < 8; i++) {
		if (input2 <= input1[i]) {
			w = i;
			break;
		}
	}

	for (i = 7; i > w; i--) {
		input1[i] = input1[i - 1];
	}

	input1[w] = input2;

	printf("output: ");
	for (i = 0; i < 8; i++) {
		printf("%d ", input1[i]);
	}

	return 0;
}


*/