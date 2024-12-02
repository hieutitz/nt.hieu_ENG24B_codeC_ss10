#include <stdio.h>

int main() {
    int arr[5] = {4, 2, 12, 22, 11};
    int n = 5;
    int i, j, temp;

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

