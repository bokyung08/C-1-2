/*#include <stdio.h>

int sq(int matrix[3][3]) {
    int sum[8] = { 0 }; //���� ������ 8�� 
    int i, j;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i] += matrix[i][j]; ///sum[0~2]����
            sum[i + 3] += matrix[j][i]; //sum[3~5]����
        }
    }

  
    for (i = 0; i < 3; i++) {
        sum[6] += matrix[i][i]; //�밢
        sum[7] += matrix[i][2 - i]; //�ݴ�밢��
    }

    for (i = 1; i < 8; i++) {
        if (sum[i] != sum[0]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int matrix[3][3];
    int i, j;

    
    printf("input: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    if (sq(matrix)){
        printf("True\n");//�������̸� true
    }
    else {
        printf("False\n");
    }

    return 0;
}
*/