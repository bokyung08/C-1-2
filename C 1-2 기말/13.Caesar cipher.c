/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* caesar(char* plain, int key) {
    int length = strlen(plain);

    for (int i = 0; i < length; i++) {

        if (plain[i] >= 'A' && plain[i] <= 'Z') {
            plain[i] = 'A' + (plain[i] - 'A' + key) % 26;
        }
        else if (plain[i] >= 'a' && plain[i] <= 'z') {
            plain[i] = 'a' + (plain[i] - 'a' + key) % 26;
        }
    }
    
    return plain;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("usage: %s 'plain text' 'key'\n", argv[0]);
        return 1;
    }

    char tmp[128];

    strcpy(tmp, argv[1]);
    caesar(tmp, atoi(argv[2])); // ascii to integer



    return 0;
}*/