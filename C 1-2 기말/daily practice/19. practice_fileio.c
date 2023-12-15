/*#include <stdio.h>
#include <stdbool.h> 

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("%s <filename>\n", argv[0]);
        return 1;
    }

    FILE* file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("파일이 없습니다");
        return 1;
    }

    int count = 0;
    char ch;
    bool i = false; 

    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (i) { 
                count++;
                i = false;
            }
        }
        else {
            if (!i) { 
                i = true;
            }
        }
    }

    if (i) { 
        count++;
    }

    printf("Word count: %d\n", count);
    fclose(file);
    return 0;
}
*/