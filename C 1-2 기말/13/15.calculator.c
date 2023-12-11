/*#include <stdio.h>
int add(int a, int b) { return a + b; };

int sub(int a, int b) { return a - b; };

int mul(int a, int b) { return a * b; };

int div(int a, int b) { return a / b; };



int main(void) {
    int x, y=0;
    char z;
    printf("num1:");
    scanf_s("%d", &x);
    printf("num2:");
    scanf_s("%d", &y);
    printf("operator:");
    scanf_s(" %c", &z);
    int (*CALC)(int,int)=NULL;
    if (z == '+') {
        CALC = add;
    }
    else if (z == '-') {
        CALC = sub;
    }
    else if (z == '*') {
        CALC = mul;
    }
    else if (z == '/') {
        CALC = div;
    }
    else {
        printf("다시입력");
    }

    printf("Result: %d \n", CALC(x,y));
    return 0;
}

*/