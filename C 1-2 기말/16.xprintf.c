/*#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void xputs(const char* s) {
	while (*s) {
		putc(*s, stdout);
		s++;
	}
}
void xitoa(int n) {
	char str[16];
	int count = 0;
	if (n < 0) {
		putc('-', stdout);
		n = n * -1;
	}
	do {
		str[count++] = (n % 10) + '0';
		n = n / 10;
	} while (count); {
		putc(str[--count], stdout);
	}
}

void xdouble(double f, int pre) {
	int i = (int)f; // 정수 부분
	xitoa(i);

	putc('.', stdout);

	// 소수 부분 출력
	double fractional = f - (double)i;
	for (int p = 0; p < pre; p++) {
		fractional *= 10.0;
		int digit = (int)fractional;
		putc('0' + digit, stdout);
		fractional -= digit;
	}
}


void xprintf(const char* fs, ...) {
	va_list argptr;
	va_start(argptr, fs);
	char c_tmp;
	int d_tmp;
	char* s_tmp;
	double t_tmp;
	int pre = 2; // 기본값을 2로 설정
	while (*fs) {
		if (*fs == '%') {
			fs++;

			switch (*fs) {
			case 'c':
				c_tmp = va_arg(argptr, char);
				putc(c_tmp, stdout);
				break;
			case 'd':
				d_tmp = va_arg(argptr, int);
				xitoa(d_tmp);
				break;
			case's':
				s_tmp = va_arg(argptr, char*);
				if (s_tmp != NULL) {
					xputs(s_tmp);
				}
				break;
			case 'f':
				xdouble(va_arg(argptr, double), pre);
				break;


			}
		}
		else {
			putc(*fs, stdout);
		}
		fs++;

	}
	va_end(argptr);
}
int main() {
	int j=scanf("%d",&j);
	double pi = 3.141592;
	
	xprintf("%f or %.2f or %.5f \n", pi, pi, pi);

}
*/