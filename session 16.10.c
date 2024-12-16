#include <stdio.h>

void xoaPhanTu(int *mang, int *kichThuoc, int viTri) {
    if (viTri < 0 || viTri >= *kichThuoc) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = viTri; i < *kichThuoc - 1; i++) {
        *(mang + i) = *(mang + i + 1);
    }
    (*kichThuoc)--;
}

void inMang(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi xoa: ");
    inMang(mang, kichThuoc);

    int viTriCanXoa = 2;
    xoaPhanTu(mang, &kichThuoc, viTriCanXoa);

    printf("Mang sau khi xoa: ");
    inMang(mang, kichThuoc);

    return 0;
}

