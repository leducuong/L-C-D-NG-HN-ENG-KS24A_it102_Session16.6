#include <stdio.h>

void sapXepMang(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc - 1; i++) {
        for (int j = i + 1; j < kichThuoc; j++) {
            if (*(mang + i) > *(mang + j)) {
                int temp = *(mang + i);
                *(mang + i) = *(mang + j);
                *(mang + j) = temp;
            }
        }
    }
}

void inMang(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}
int main() {
    int mang[] = {5, 2, 8, 1, 3};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    printf("Mang truoc khi sap xep: ");
    inMang(mang, kichThuoc);
    sapXepMang(mang, kichThuoc);
    printf("Mang sau khi sap xep: ");
    inMang(mang, kichThuoc);

    return 0;
}

