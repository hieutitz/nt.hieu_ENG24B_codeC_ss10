#include <stdio.h>

int main() {
    int arr[] = {4, 2, 12, 22, 11};
    int size = 5;

    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && temp < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    int value;
    int start = 0;
    int end = size - 1;
    int mid;
    int flag = -1;

    printf("Moi ban nhap vao mot so nguyen bat ky: ");
    scanf("%d", &value);

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == value) {
            flag = mid;
            break;
        } else if (arr[mid] > value) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if (flag != -1) {
        printf("Phan tu %d nam o vi tri thu: %d\n", value, mid);
    } else {
        printf("Khong co phan tu %d trong mang\n", value);
    }

    return 0;
}

