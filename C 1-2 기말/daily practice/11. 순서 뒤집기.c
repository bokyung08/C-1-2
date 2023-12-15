/*#include <stdio.h>
#include <stdlib.h>


int main() {
    int numbers[100];
    int count = 0;
    int num;

    printf("input:\n");

    while (1) {
        scanf("%d", &num);///아니 scanf핢떄 &뿥여야지
        if (num == -1) {
            break;
        }
        numbers[count++] = num;
    }
    printf("output: ");
    for (int i = count - 1; i >= 0; i--) {///거꾸로 출력해야하니까
        printf("%d ", numbers[i]);
    }

    return 0;
}
*/