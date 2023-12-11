

/*
#include <stdio.h>
#include <string.h>
int my_strcmp(const char* s1, const char* s2) {
    int i = 0;
    while (s1[i] != '\0' ||s2[i] != '\0') {
        if (s1[i] > s2[i])
            return (s1[i] - s2[i]);
        else if (s1[i] < s2[i])
            return (s1[i] - s2[i]);
        else
            i++;
    }
    return 0;
}

int main() {
    char str[] = "app";
    char cmp1[] = "bananadddddd";
    char cmp2[] = "melfdfeon";
    char cmp3[] = "aaaea";

    printf("%d\n", strcmp(str, cmp1));
    printf("%d\n", strcmp(str, cmp2));
    printf("%d\n", strcmp(str, cmp3));

    printf("\n");

    printf("%d\n", my_strcmp(str, cmp1));
    printf("%d\n", my_strcmp(str, cmp2));
    printf("%d\n", my_strcmp(str, cmp3));

    return 0;
}
*/
//////온라인 컴파일러에서는 돌아가는ㄴ데 vs에서는 안돌아감 미친거니?????????????????????