/*#include <stdio.h>
#include <stdarg.h>

void xputs(const char* s) {
	while (*s) { //s�� NULL�� �ɶ�����
		putc(*s, stdout); //stdout: ǥ����� ��Ʈ��(���α׷��� ��ǻ���� �� ��ü �̾��ִ� ����)
		s++;//���� ���ڷ� �̵�
	}
}
void xitoa(int n) {
	char str[16];
	int count = 0;
	if (n < 0) { //n�� �����϶�
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
void xftoa(double f, int pre) {
	long long int_part = (long long)f;
	double frac = f - (double)int_part;
	xitoa(int_part);
	if (pre > 0) {
		putc('.', stdout);
		double frac = f - (double)int_part;
		for (int i = 0;i < pre;i++) {
			frac *= 10;
			int digit = (int)frac % 10;
			putc('0' + digit, stdout);
		}
	}
}
void xprintf(const char* fs, ...) {
	va_list argptr;
	va_start(argptr, fs);

	char c_tmp;
	int d_tmp;
	char* s_tmp;
	double f_tmp;
	int pre = 0;

	while (*fs) {
		if (*fs == '%') {
			fs++;
			if (*fs == '.') {
				fs++;
				pre = *fs - '0';
				fs++;
			}
			switch (*fs) {
			case 'c': 
				c_tmp = va_arg(argptr, char);
				putc(c_tmp, stdout);
				break;
			case 'd':
				d_tmp = va_arg(argptr, int);
				xitoa(d_tmp);
				break;
			case 's':
				s_tmp = va_arg(argptr, char *);
				if (s_tmp != NULL)
					xputs(s_tmp);
				break;
			case 'f':
				f_tmp = va_arg(argptr, double);
				xftoa(f_tmp, pre);
				break;


			}
		}
		else { putc(*fs, stdout); }

		fs++;
	}
	
	va_end(argptr);
}
int main() {
	double pi = 3.141592;
	xprintf("my printf\n"); 
	char c = '#'; 
	int n = 2344; 
	char s[] = "good";  
	xprintf("%c %d %s %.5f\n", c, n, s, pi);
	xprintf("%f or %.2f or %.5f \n", pi, pi, pi);
	
}*/