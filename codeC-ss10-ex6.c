#include <stdio.h>

int main() {
    int arr[5] = {4, 2, 12, 2, 11};
    int n = 5, target, i, count = 0;
    int positions[n];

    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            positions[count] = i;
            count++;
        }
    }

    if(count > 0) {
        printf("Phan tu %d duoc tim thay o cac vi tri: ", target);
        for(i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}

