#include <stdio.h>

int main() {
    int n, m, i, j, k, temp;

    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int arr[n][m];

    printf("Nhap gia tri cho mang 2 chieu:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(j = 0; j < m; j++) {
        for(i = 0; i < n - 1; i++) {
            for(k = 0; k < n - i - 1; k++) {
                if(arr[k][j] > arr[k + 1][j]) {
                    temp = arr[k][j];
                    arr[k][j] = arr[k + 1][j];
                    arr[k + 1][j] = temp;
                }
            }
        }
    }

    printf("Mang sau khi sap xep tung cot theo thu tu tang dan:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

