#include <stdio.h>

int main() {
    int arr[5] = {4, 2, 12, 22, 11};
    int n = 5;
    int i, j, minIndex, temp;

    for(i = 0; i < n - 1; i++) {
        minIndex = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

