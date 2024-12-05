#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, value, pos;

    while (1) {
       	printf("\nMENU:\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong so hoan hao\n");
        printf("4. Tim gia tri lon thu hai trong mang\n");
        printf("5. Them phan tu vao mang\n");
        printf("6. Xoa phan tu trong mang\n");
        printf("7. Sap xep mang theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu Binary Search\n");
        printf("9. Sap xep chan truoc, le sau\n");
        printf("10. Dao nguoc mang\n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) { // Nhap so phan tu va gia tri cho mang
            printf("Moi ban nhap so phan tu: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                printf("Moi ban nhap arr[%d]: ", i);
                scanf("%d", &arr[i]);
            }
        } else if (choice == 2) { // In ra gia tri cac phan tu trong mang
            printf("Cac phan tu trong mang:\n");
            for (int i = 0; i < n; i++) {
                printf("arr[%d] = %d\n", i, arr[i]);
            }
        } else if (choice == 3) { // Dem so luong so hoan hao
            int count = 0;
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = 1; j < arr[i]; j++) {
                    if (arr[i] % j == 0) sum += j;
                }
                if (sum == arr[i]) count++;
            }
            printf("So luong hoan hao: %d\n", count);
      	} else if (choice == 5) { // Them phan tu vao mang
            printf("Nhap gia tri can them:");
            scanf("%d", &value);
            printf("Nhap vi tri can them:");
            scanf("%d", &pos);
            if (pos < 0 || pos > n) {
                printf("Vi tri nay khong hop le!\n");
            } else {
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                printf("Them phan tu thanh cong!\n");
            }
        } else if (choice == 6) { // Xoa phan tu trong mang
            printf("Nhap vi tri ban can xoa: ");
            scanf("%d", &pos);
            if (pos < 0 || pos >= n) {
                printf("Vi tri nay khong hop le!\n");
            } else {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Xoa phan tu thanh cong!\n");
            }
        } else if (choice == 7) { // Sap xep mang theo thu tu tang dan
            for (int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
            printf("Mang sau khi sap xep tang dan:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 8) { // Tim kiem phan tu Binary Search
            printf("Moi ban nhap gia tri can tim:");
            scanf("%d", &value);
            for (int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
            }
        } else if (choice == 9) { // Sap xep chan truoc, le sau
            int i = 0, j = n - 1;
            while (i < j) {
                while (i < n && arr[i] % 2 == 0) i++;
                while (j >= 0 && arr[j] % 2 != 0) j--;
                if (i < j) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            printf("Mang sau khi sap xep chan truoc, le sau:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 10) { // Dao nguoc mang
            for (int i = 0; i < n / 2; i++) {
                int temp = arr[i];
                arr[i] = arr[n - i - 1];
                arr[n - i - 1] = temp;
            }
            printf("Mang sau khi dao nguoc:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 11) { // Ket thuc chuong trinh
            printf("Thoat.\n");
            break;
        } else {
            printf("!\n");
        }
    }
    return 0;
}



