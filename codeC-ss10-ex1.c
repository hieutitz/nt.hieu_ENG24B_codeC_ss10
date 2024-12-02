#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int value, i;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            printf("Phan tu %d co trong mang va nam o vi tri %d.\n", value, i);
            return 0;
        }
    }

    printf("Phan tu %d khong co trong mang.\n", value);

    return 0;
}

