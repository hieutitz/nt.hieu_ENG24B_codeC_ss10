#include <stdio.h>

int main() {
    int arr[5] = {4, 2, 12, 22, 11};
    int n = 5;
    int i, j, key;

    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

