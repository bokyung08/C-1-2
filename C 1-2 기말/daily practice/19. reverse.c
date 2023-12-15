/*#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: %s 'sample.txt' 'output.txt'\n", argv[0]);
        return 1;
    }

    FILE* fo = fopen(argv[1], "r");
    FILE* fw = fopen(argv[2], "w");

    if (fo == NULL || fw == NULL) {
        printf("File open failed\n");
        return 1;
    }

    fseek(fo, 0, SEEK_END); 
    int size = ftell(fo); 
    fseek(fo, 0, SEEK_SET); 

    char*c = (char*)malloc(size); 


    fread(c, 1, size, fo); 

   
    for (int i = size - 1; i >= 0; i--) {
        fputc(c[i], fw);
    }

    free(c); 
    fclose(fo);
    fclose(fw);

    return 0;
}
*/