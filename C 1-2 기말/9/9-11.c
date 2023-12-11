/*#include <stdio.h>
void xitoa(int n) {
	char str[16];
	int count = 0;
	if (n < 0) { //n이 음수일때
		putc('-', stdout);
		n = n * -1;
	}
	do {
		str[count++] = (n % 10) + '0';
		n = n / 10;
	} while (n);

	while (count) {
		putc(str[--count], stdout);
	}
	str[count] = '/0';
}
int main() {
	xitoa(-881026);
	
}*/
