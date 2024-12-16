#include <stdio.h>

void themPhanTu(int *mang, int *kichThuoc, int giaTriMoi, int viTri) {
    if (viTri < 0 || viTri > *kichThuoc) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    for (int i = *kichThuoc; i > viTri; i--) {
        *(mang + i) = *(mang + i - 1);
    }
    
    *(mang + viTri) = giaTriMoi;
    (*kichThuoc)++;
}

void inMang(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}

int main() {
    int mang[100] = {1, 2, 3, 4, 5};
    int kichThuoc = 5;

    printf("Mang ban dau: ");
    inMang(mang, kichThuoc);

    int giaTriMoi = 99;
    int viTriCanChen = 2;

    themPhanTu(mang, &kichThuoc, giaTriMoi, viTriCanChen);

    printf("Mang sau khi chen gia tri %d o vi tri %d: ", giaTriMoi, viTriCanChen);
    inMang(mang, kichThuoc);

    return 0;
}

