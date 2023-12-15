/*#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("usage: %s filename\n", argv[0]);
        return 1;
    }

    FILE* fo;
    char c, p = '\0';

    fo = fopen(argv[1], "r");
    if (fo == NULL) {
        printf("%s 파일이 없음.\n", argv[1]);
        return 1;
    }

    while ((c= fgetc(fo)) != EOF) {
        if (c != '\n' || p!= '\n') {
            putchar(c); 
        }
        p= c;
    }

    fclose(fo);
    return 0;
}
*/